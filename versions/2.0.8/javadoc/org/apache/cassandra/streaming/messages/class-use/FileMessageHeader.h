<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (version 1.7.0_55) on Wed May 21 12:21:32 CEST 2014 -->
<title>Uses of Class org.apache.cassandra.streaming.messages.FileMessageHeader (apache-cassandra API)</title>
<meta name="date" content="2014-05-21">
<link rel="stylesheet" type="text/css" href="../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    if (location.href.indexOf('is-external=true') == -1) {
        parent.document.title="Uses of Class org.apache.cassandra.streaming.messages.FileMessageHeader (apache-cassandra API)";
    }
//-->
</script>
<noscript>
<div>JavaScript is disabled on your browser.</div>
</noscript>
<!-- ========= START OF TOP NAVBAR ======= -->
<div class="topNav"><a name="navbar_top">
<!--   -->
</a><a href="#skip-navbar_top" title="Skip navigation links"></a><a name="navbar_top_firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../../../../../../overview-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/cassandra/streaming/messages/class-use/FileMessageHeader.html" target="_top">Frames</a></li>
<li><a href="FileMessageHeader.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../../../allclasses-noframe.html">All Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_top");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<a name="skip-navbar_top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<div class="header">
<h2 title="Uses of Class org.apache.cassandra.streaming.messages.FileMessageHeader" class="title">Uses of Class<br>org.apache.cassandra.streaming.messages.FileMessageHeader</h2>
</div>
<div class="classUseContainer">
<ul class="blockList">
<li class="blockList">
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing packages, and an explanation">
<caption><span>Packages that use <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Package</th>
<th class="colLast" scope="col">Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.cassandra.streaming">org.apache.cassandra.streaming</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.cassandra.streaming.compress">org.apache.cassandra.streaming.compress</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.cassandra.streaming.messages">org.apache.cassandra.streaming.messages</a></td>
<td class="colLast">&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList">
<ul class="blockList">
<li class="blockList"><a name="org.apache.cassandra.streaming">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a> in <a href="../../../../../../org/apache/cassandra/streaming/package-summary.html">org.apache.cassandra.streaming</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/cassandra/streaming/package-summary.html">org.apache.cassandra.streaming</a> with parameters of type <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">StreamSession.</span><code><strong><a href="../../../../../../org/apache/cassandra/streaming/StreamSession.html#doRetry(org.apache.cassandra.streaming.messages.FileMessageHeader, java.lang.Throwable)">doRetry</a></strong>(<a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a>&nbsp;header,
       java.lang.Throwable&nbsp;e)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">StreamSession.</span><code><strong><a href="../../../../../../org/apache/cassandra/streaming/StreamSession.html#fileSent(org.apache.cassandra.streaming.messages.FileMessageHeader)">fileSent</a></strong>(<a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a>&nbsp;header)</code>
<div class="block">Call back after sending FileMessageHeader.</div>
</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing constructors, and an explanation">
<caption><span>Constructors in <a href="../../../../../../org/apache/cassandra/streaming/package-summary.html">org.apache.cassandra.streaming</a> with parameters of type <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/streaming/StreamReader.html#StreamReader(org.apache.cassandra.streaming.messages.FileMessageHeader, org.apache.cassandra.streaming.StreamSession)">StreamReader</a></strong>(<a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a>&nbsp;header,
            <a href="../../../../../../org/apache/cassandra/streaming/StreamSession.html" title="class in org.apache.cassandra.streaming">StreamSession</a>&nbsp;session)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.cassandra.streaming.compress">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a> in <a href="../../../../../../org/apache/cassandra/streaming/compress/package-summary.html">org.apache.cassandra.streaming.compress</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing constructors, and an explanation">
<caption><span>Constructors in <a href="../../../../../../org/apache/cassandra/streaming/compress/package-summary.html">org.apache.cassandra.streaming.compress</a> with parameters of type <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/streaming/compress/CompressedStreamReader.html#CompressedStreamReader(org.apache.cassandra.streaming.messages.FileMessageHeader, org.apache.cassandra.streaming.StreamSession)">CompressedStreamReader</a></strong>(<a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a>&nbsp;header,
                      <a href="../../../../../../org/apache/cassandra/streaming/StreamSession.html" title="class in org.apache.cassandra.streaming">StreamSession</a>&nbsp;session)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.cassandra.streaming.messages">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a> in <a href="../../../../../../org/apache/cassandra/streaming/messages/package-summary.html">org.apache.cassandra.streaming.messages</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing fields, and an explanation">
<caption><span>Fields in <a href="../../../../../../org/apache/cassandra/streaming/messages/package-summary.html">org.apache.cassandra.streaming.messages</a> declared as <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Field and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></code></td>
<td class="colLast"><span class="strong">IncomingFileMessage.</span><code><strong><a href="../../../../../../org/apache/cassandra/streaming/messages/IncomingFileMessage.html#header">header</a></strong></code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></code></td>
<td class="colLast"><span class="strong">OutgoingFileMessage.</span><code><strong><a href="../../../../../../org/apache/cassandra/streaming/messages/OutgoingFileMessage.html#header">header</a></strong></code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing fields, and an explanation">
<caption><span>Fields in <a href="../../../../../../org/apache/cassandra/streaming/messages/package-summary.html">org.apache.cassandra.streaming.messages</a> with type parameters of type <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Field and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/cassandra/io/IVersionedSerializer.html" title="interface in org.apache.cassandra.io">IVersionedSerializer</a>&lt;<a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a>&gt;</code></td>
<td class="colLast"><span class="strong">FileMessageHeader.</span><code><strong><a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html#serializer">serializer</a></strong></code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing constructors, and an explanation">
<caption><span>Constructors in <a href="../../../../../../org/apache/cassandra/streaming/messages/package-summary.html">org.apache.cassandra.streaming.messages</a> with parameters of type <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/cassandra/streaming/messages/IncomingFileMessage.html#IncomingFileMessage(org.apache.cassandra.io.sstable.SSTableWriter, org.apache.cassandra.streaming.messages.FileMessageHeader)">IncomingFileMessage</a></strong>(<a href="../../../../../../org/apache/cassandra/io/sstable/SSTableWriter.html" title="class in org.apache.cassandra.io.sstable">SSTableWriter</a>&nbsp;sstable,
                   <a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">FileMessageHeader</a>&nbsp;header)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
</ul>
</li>
</ul>
</div>
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar_bottom">
<!--   -->
</a><a href="#skip-navbar_bottom" title="Skip navigation links"></a><a name="navbar_bottom_firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../../org/apache/cassandra/streaming/messages/FileMessageHeader.html" title="class in org.apache.cassandra.streaming.messages">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../../../../../../overview-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/cassandra/streaming/messages/class-use/FileMessageHeader.html" target="_top">Frames</a></li>
<li><a href="FileMessageHeader.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../../../allclasses-noframe.html">All Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_bottom");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<a name="skip-navbar_bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &copy; 2014 The Apache Software Foundation</small></p>
</body>
</html>
