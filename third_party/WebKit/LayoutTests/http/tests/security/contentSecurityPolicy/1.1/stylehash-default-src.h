<!DOCTYPE html>
<html>
    <head>
    <title>Style Hash allow hash in default-src</title>
    <script src="../../../resources/testharness.js"></script>
    <script src="../../../resources/testharnessreport.js"></script>
    <meta http-equiv="Content-Security-Policy" content="default-src * 'sha256-SXMrww9+PS7ymkxYbv91id+HfXeO7p1uCY0xhNb4MIw='; script-src 'unsafe-inline'">
    </head>

    <body>
    <p id="p"></p>
    <style>p#p { color: green; }</style>
    <script>
    var color = window.getComputedStyle(document.querySelector('#p')).color;
    assert_equals(color, "rgb(0, 128, 0)");
    done();
    </script>
    </body>
</html>