<?php
include("moss.php");

$language = $_POST['language'];
$userid = ""; // Enter your MOSS userid
$moss = new MOSS($userid);
$moss->setLanguage('java');
$moss->addByWildcard('test/*');
$moss->addBaseFile('Example.java');
$moss->setCommentString("This is a test");
print_r($moss->send());
?>