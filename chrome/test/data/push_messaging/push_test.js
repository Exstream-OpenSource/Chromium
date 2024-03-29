// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

// The ResultQueue is a mechanism for passing messages back to the test
// framework.
var resultQueue = new ResultQueue();

var pushSubscriptionOptions = {
  userVisibleOnly: true
};

// Waits for the given ServiceWorkerRegistration to become ready.
// Shim for https://github.com/w3c/ServiceWorker/issues/770.
function swRegistrationReady(reg) {
  return new Promise((resolve, reject) => {
    if (reg.active) {
      resolve();
      return;
    }

    if (!reg.installing && !reg.waiting) {
      reject(Error('Install failed'));
      return;
    }

    (reg.installing || reg.waiting).addEventListener('statechange', function() {
      if (this.state == 'redundant') {
        reject(Error('Install failed'));
      } else if (this.state == 'activated') {
        resolve();
      }
    });
  });
}

// Notification permission has been coalesced with Push permission. After
// this is granted, Push API subscription can succeed.
function requestNotificationPermission() {
  Notification.requestPermission(function(permission) {
    sendResultToTest('permission status - ' + permission);
  });
}

function registerServiceWorker() {
  // The base dir used to resolve service_worker.js and the scope depends on
  // whether this script is included from an html file in ./, subscope1/, or
  // subscope2/.
  navigator.serviceWorker.register('service_worker.js', {scope: './'}).then(
      function(swRegistration) {
        sendResultToTest('ok - service worker registered');
      }, sendErrorToTest);
}

function unregisterServiceWorker() {
  navigator.serviceWorker.getRegistration().then(function(swRegistration) {
    swRegistration.unregister().then(function(result) {
      sendResultToTest('service worker unregistration status: ' + result);
    })
  }).catch(sendErrorToTest);
}

function replaceServiceWorker() {
  navigator.serviceWorker.register('service_worker_with_skipWaiting_claim.js', {
    scope: './'
  }).then(swRegistrationReady).then(() => {
    sendResultToTest('ok - service worker replaced');
  }).catch(sendErrorToTest);
}

function removeManifest() {
  var element = document.querySelector('link[rel="manifest"]');
  if (element) {
    element.parentNode.removeChild(element);
    sendResultToTest('manifest removed');
  } else {
    sendResultToTest('unable to find manifest element');
  }
}

function swapManifestNoSenderId() {
  var element = document.querySelector('link[rel="manifest"]');
  if (element) {
    element.href = 'manifest_no_sender_id.json';
    sendResultToTest('sender id removed from manifest');
  } else {
    sendResultToTest('unable to find manifest element');
  }
}

// This is the old style of push subscriptions which we are phasing away
// from, where the subscription used a sender ID instead of public key.
function documentSubscribePushWithoutKey() {
  navigator.serviceWorker.ready.then(function(swRegistration) {
    return swRegistration.pushManager.subscribe(
        pushSubscriptionOptions)
        .then(function(subscription) {
          sendResultToTest(subscription.endpoint);
        });
  }).catch(sendErrorToTest);
}

function documentSubscribePush() {
  navigator.serviceWorker.ready.then(function(swRegistration) {
    pushSubscriptionOptions.applicationServerKey = kApplicationServerKey.buffer;
    return swRegistration.pushManager.subscribe(pushSubscriptionOptions)
        .then(function(subscription) {
          sendResultToTest(subscription.endpoint);
        });
  }).catch(sendErrorToTest);
}

function workerSubscribePush() {
  // Send the message to the worker for it to subscribe
  navigator.serviceWorker.controller.postMessage({command: 'workerSubscribe'});
}

function workerSubscribePushNoKey() {
  // The worker will try to subscribe without providing a key. This should
  // succeed if the worker was previously subscribed and fail otherwise.
  navigator.serviceWorker.controller.postMessage(
      {command: 'workerSubscribeNoKey'});
}

function GetP256dh() {
  navigator.serviceWorker.ready.then(function(swRegistration) {
    return swRegistration.pushManager.getSubscription()
        .then(function(subscription) {
          sendResultToTest(btoa(String.fromCharCode.apply(null,
              new Uint8Array(subscription.getKey('p256dh')))));
        });
  }).catch(sendErrorToTest);
}

function permissionState() {
  navigator.serviceWorker.ready.then(function(swRegistration) {
    return swRegistration.pushManager.permissionState(pushSubscriptionOptions)
        .then(function(permission) {
          sendResultToTest('permission status - ' + permission);
        });
  }).catch(sendErrorToTest);
}

function isControlled() {
  if (navigator.serviceWorker.controller) {
    sendResultToTest('true - is controlled');
  } else {
    sendResultToTest('false - is not controlled');
  }
}

function unsubscribePush() {
  navigator.serviceWorker.ready.then(function(swRegistration) {
    if (!swRegistration) {
      sendResultToTest('unsubscribe result: false');
      return;
    }
    swRegistration.pushManager.getSubscription().then(function(pushSubscription)
    {
      if (!pushSubscription) {
        sendResultToTest('unsubscribe result: false');
        return;
      }
      pushSubscription.unsubscribe().then(function(result) {
        sendResultToTest('unsubscribe result: ' + result);
      }, function(error) {
        sendResultToTest('unsubscribe error: ' + error.message);
      });
    })
  });
}

function storePushSubscription() {
  navigator.serviceWorker.ready.then(swRegistration => {
    swRegistration.pushManager.getSubscription().then(pushSubscription => {
      window.storedPushSubscription = pushSubscription;
      sendResultToTest('ok - stored');
    }, sendErrorToTest);
  }, sendErrorToTest);
}

function unsubscribeStoredPushSubscription() {
  window.storedPushSubscription.unsubscribe().then(function(result) {
    sendResultToTest('unsubscribe result: ' + result);
  }, function(error) {
    sendResultToTest('unsubscribe error: ' + error.message);
  });
}

function hasSubscription() {
  navigator.serviceWorker.ready.then(function(swRegistration) {
    return swRegistration.pushManager.getSubscription();
  }).then(function(subscription) {
    sendResultToTest(subscription ? 'true - subscribed'
                                  : 'false - not subscribed');
  }).catch(sendErrorToTest);
}

navigator.serviceWorker.addEventListener('message', function(event) {
  var message = JSON.parse(event.data);
  if (message.type == 'push')
    resultQueue.push(message.data);
  else
    sendResultToTest(message.data);
}, false);
