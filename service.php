<?php
function generateRandomString($length = 10) {
    $characters = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
    $randomString = '';
    for ($i = 0; $i < $length; $i++) {
        $randomString .= $characters[rand(0, strlen($characters) - 1)];
    }
    return $randomString;
}
include("moss.php");
$userid = "7967497"; // Enter your MOSS userid
$moss = new MOSS($userid);
$name_folder = generateRandomString();
$path = $name_folder."/"; // Upload directory
mkdir('./'.$name_folder);
$count = 0;
$language = $_POST['language'];
if (isset($_POST) and $_SERVER['REQUEST_METHOD'] == "POST") {
 foreach ($_FILES['files']['name'] as $f => $name) {
 if ($_FILES['files']['error'][$f] == 0) {
 if (move_uploaded_file($_FILES["files"]["tmp_name"][$f], $path . $name))
 $count++; // Number of successfully uploaded file
 }
 }
}
$moss->setLanguage($language);
$moss->addByWildcard($path.'*');
rmdir('./'.$name_folder);
// $moss->setCommentString("This is a test");
print_r($moss->send());
?>