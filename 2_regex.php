<?php
$username_regex = '/^[A-Za-z]{1}[A-Za-z0-9]{5,31}$/';
$password_regex = '/^(?=.*[A-Za-z])(?=.+[\d]+)(?=.*[=]+)(?=.*[#|?|@|!|$|%|^|&|*|-|_|=]+).{8,}$/';

if (preg_match($username_regex, "Xrutaf888"))
{
    echo 'True';
}

if (!preg_match($username_regex, "1Diana"))
{
    echo 'False';
}

if (preg_match($password_regex, "passW0rd="))
{
    echo 'True';
}

if (!preg_match($password_regex, "C0d3YourFuture!#")) 
{
    echo 'False';
}
?>