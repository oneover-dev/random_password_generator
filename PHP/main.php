<?php 
 
echo "Enter password length: ";
$length = trim(fgets(STDIN));

if (!is_numeric($length) || $length <= 0) {
    echo "Length must be greater than 0\n";
    exit(1);
}

$chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}<>?/|";
$password = "";

for ($i = 0; $i < $length; $i++) {
    $password .= $chars[random_int(0, strlen($chars) - 1)];
}

echo $password . "\n";
