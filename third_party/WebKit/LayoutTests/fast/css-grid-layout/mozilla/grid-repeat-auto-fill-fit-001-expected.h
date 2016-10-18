<!DOCTYPE HTML>
<!--
     Any copyright is dedicated to the Public Domain.
     http://creativecommons.org/publicdomain/zero/1.0/
-->
<html><head>
  <meta charset="utf-8">
  <title>Reference: repeat(auto-fill/auto-fit)</title>
  <link rel="author" title="Mats Palmgren" href="https://bugzilla.mozilla.org/show_bug.cgi?id=1118820">
  <style type="text/css">
html,body {
    color:black; background-color:white; font-size:16px; padding:0; margin:0;
}

.grid {
  display: grid;
  position: relative;
  border: 1px solid;
  grid-auto-rows: 10px;
  grid-gap: 2px;
  margin-bottom: 2px;
  padding-right: 3px;
}
.r1 { grid-template-columns: [a] repeat(3, [b] 20px [c]) [d]; }
.r2 { grid-template-columns: [a] repeat(3, [b] 20px [c]) [d] 30px [e]; }
.r3 { grid-template-columns: [a] repeat(3, [b] 20px [c]) [d] 30px [e] 30px [f]; }
fit .r1 { grid-template-columns: [a] repeat(3, [b] 20px [c]) [d]; }
fit .r2 { grid-template-columns: [a] repeat(3, [b] 20px [c]) [d] 30px [e]; }
fit .r3 { grid-template-columns: [a] repeat(3, [b] 20px [c]) [d] 30px [e] 30px [f]; }

.w100 { width: 100px; }
.w50 { width: 50px; }
.w80 { width: 80px; }
.mw100 { min-width: 100px; }
.mw50 { min-width: 50px; }
.mw80 { min-width: 80px; }
.xw100 { max-width: 100px; }
.xw50 { max-width: 50px; }
.xw80 { max-width: 80px; }
.float { float: left; }

x {
  height: 10px;
  background: grey;
}
a {
  position: absolute;
  left:0; right:0; top:0; height: 3px;
  background: black;
  grid-column: c / c -1;
}
b {
  position: absolute;
  left:0; right:0; bottom:0; height: 3px;
  background: brown;
  grid-column: auto / c -1;
}

x:first-child {
  background: lime;
}
x:last-child {
  background: blue;
}

fill,fit {
  float: left;
  width: 390px;
}

.r1.c0 { grid-template-columns: none;}
.r1.c1 { grid-template-columns: [a] repeat(1, [b] 20px [c]) [d];}
.r1.c2 { grid-template-columns: [a] repeat(2, [b] 20px [c]) [d]; }
.r1.c4 { grid-template-columns: [a] repeat(4, [b] 20px [c]) [d]; }
/* The repeat count was 18 in the original test. We had to reduce it to accomodate fit and fit tests
   in a viewport with no scroll. */
.r1.c18 { grid-template-columns: [a] repeat(17, [b] 20px [c]) [d]; }

.r2.c16 { grid-template-columns: [a] repeat(16, [b] 20px [c]) [d] 30px [e]; }
.r2.c0 { grid-template-columns:  30px [e];}
.r2.c1 { grid-template-columns: [a] repeat(1, [b] 20px [c]) [d] 30px [e]; }
.r2.c2 { grid-template-columns: [a] repeat(2, [b] 20px [c]) [d] 30px [e]; }

/* The repeat count was 15 in the original test. We had to reduce it to accomodate fit and fit tests
   in a viewport with no scroll. */
.r3.c15 { grid-template-columns: [a] repeat(14, [b] 20px [c]) [d] 30px [e] 30px [f]; }
.r3.c0 { grid-template-columns: [a d] 30px [e] 30px [f]; }
.r3.c1 { grid-template-columns: [a] repeat(1, [b] 20px [c]) [d] 30px [e] 30px [f]; }

</style>
</head>
<body>

<fill>

<div class="grid r1 c18"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w100 c4"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w80"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w50 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 xw80"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 xw50 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w100 xw80"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 mw50 float c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 mw80 float"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w100 mw50 float c4"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 mw100 w50 float c4"><x></x><x></x><a></a><b></b><x></x></div>

<br clear="all">
<br clear="all">

<div class="grid r2 c16"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w100"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w80 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w50 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 xw80 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 xw50 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w100 xw80 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 mw50 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 mw80 float c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w100 mw50 float"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 mw100 w50 float"><x></x><x></x><a></a><b></b><x></x></div>

<br clear="all">
<br clear="all">

<div class="grid r3 c15"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w100 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w80 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w50 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 xw80 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 xw50 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w100 xw80 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 mw50 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 mw80 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w100 mw50 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 mw100 w50 float c1"><x></x><x></x><a></a><b></b><x></x></div>

</fill>

<fit>

<div class="grid r1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w100"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w80"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w50 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 xw80"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 xw50 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w100 xw80"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 mw50 float c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 mw80 float"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 w100 mw50 float"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r1 mw100 w50 float"><x></x><x></x><a></a><b></b><x></x></div>

<br clear="all">
<br clear="all">

<div class="grid r2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w100"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w80 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w50 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 xw80 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 xw50 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w100 xw80 c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 mw50 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 mw80 float c2"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 w100 mw50 float"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r2 mw100 w50 float"><x></x><x></x><a></a><b></b><x></x></div>

<br clear="all">
<br clear="all">

<div class="grid r3"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w100 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w80 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w50 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 xw80 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 xw50 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w100 xw80 c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 mw50 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 mw80 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 w100 mw50 float c1"><x></x><x></x><a></a><b></b><x></x></div>
<div class="grid r3 mw100 w50 float c1"><x></x><x></x><a></a><b></b><x></x></div>

<br clear="all">
<br clear="all">

</fit>

</body>
</html>