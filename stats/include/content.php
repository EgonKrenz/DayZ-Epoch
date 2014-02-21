<?php

if ( !isset($_GET['show']) ) { $_GET['show'] = false; } 
  
switch( $_GET['show'] ) 
{
  default :  
	require_once('function/mainStats.func.php');
	include('include/content/showMain.php');       
  break;
  
  case 'Main' :  
	require_once('function/mainStats.func.php');
	include('include/content/showMain.php');       
  break;
  
  case 'ZKillers' :  
	require_once('function/zombieKillers.func.php');
	include('include/content/showZKillers.php');   
  break;
  
  case 'BKillers' :  
	require_once('function/banditKillers.func.php');
	include('include/content/showBKillers.php');   
  break;
  
  case 'HKillers' :  
	require_once('function/humanKillers.func.php');
	include('include/content/showHKillers.php');  
  break;
  
  case 'Humanity' :  
	require_once('function/humanity.func.php');
	include('include/content/showHumanity.php');   
  break;
  
  case 'Alive' :  
	require_once('function/alive.func.php');
	include('include/content/showAlive.php');   
  break;

}
?>