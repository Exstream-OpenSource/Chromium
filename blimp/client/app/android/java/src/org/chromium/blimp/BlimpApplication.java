// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.blimp;

import android.app.Application;
import android.content.Context;

import org.chromium.base.BaseChromiumApplication;
import org.chromium.base.CommandLineInitUtil;
import org.chromium.base.ContextUtils;
import org.chromium.base.PathUtils;

/**
 * The {@link Application} for the Blimp client.
 */
public class BlimpApplication extends BaseChromiumApplication {
    private static final String COMMAND_LINE_FILE = "blimp-command-line";
    private static final String PRIVATE_DATA_DIRECTORY_SUFFIX = "blimp";

    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        ContextUtils.initApplicationContext(this);
    }

    @Override
    public void onCreate() {
        super.onCreate();
        PathUtils.setPrivateDataDirectorySuffix(PRIVATE_DATA_DIRECTORY_SUFFIX);
        initCommandLine();
    }

    @Override
    public void initCommandLine() {
        CommandLineInitUtil.initCommandLine(this, COMMAND_LINE_FILE);
    }
}
