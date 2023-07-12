#!/usr/bin/php
<?php
foreach(file('/usr/share/dict/linux.words') as $line){
if(strpos($line, "abc") != false){
echo "$line";
}
} 
?>