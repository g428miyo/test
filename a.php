#!/usr/bin/php
<?php 
foreach(file('/usr/share/dict/linux.words') as $line){
$pos = strpos($line, "abc");
if( $pos !== false){
echo "$line";
}
} 
?>
