<?php

include("moss.php");

$max_file_size = 1024 * 100; //100 kb
$path = "test/"; // Upload directory
$count = 0;

if (isset($_POST) and $_SERVER['REQUEST_METHOD'] == "POST") {
    // Loop $_FILES to exeicute all files
    $language = $_POST['language_code'];
    foreach ($_FILES['files']['name'] as $f => $name) {
        if ($_FILES['files']['error'][$f] == 0) {
            if (move_uploaded_file($_FILES["files"]["tmp_name"][$f], $path . $name))
                $count++; // Number of successfully uploaded file
        }
    }
}
$userid = "7967497"; // Enter your MOSS userid
$moss = new MOSS($userid);
$moss->setLanguage($language);
$moss->addByWildcard('test/*');
//$moss->addBaseFile('Example.java');
$moss->setCommentString("This is a test");
print_r($moss->send());
?>