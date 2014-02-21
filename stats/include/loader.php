<?php
if( !isset($_SESSION) ) session_start();
define('SurvivorStats', true);
error_reporting(0);
require_once('config.php');
require_once('function/mySQL.func.php');
?>