<?php
/*****************
SurvivorStats by Nightmare
denis1969@gmx.net 
www.n8m4re.de
******************/

$db = @new mysqli($HOST,$USER,$PASS,$DB,$PORT);
if($db->connect_error == true){
echo '<script> $(function() {$.jnotify(\'CANNOT CONNECT TO HIVE DATABASE\', \'error\', {timeout: 0}); });</script>';
echo '<p style="color:red">'.$db->connect_error.'</p>';
exit();
}




function secure($string) 
{
global $db;  

			$muster = array(
				'select',
				'insert',
				'update',
				'drop',
				'truncate',
				'delete',
				'union'
				);	
								
		if ( get_magic_quotes_gpc() ) { 
				$string = stripslashes( $string ); 
		}
		
		foreach ( $muster as $injection ) {
			if ( preg_match( "/{$injection}/i", $string ) ) {
				$string = str_replace( $muster,'', $string ); 	
			}
		}	
						 
				$string = trim( $string ); 
				$string = strip_tags( $string );
				$string = $db->real_escape_string( $string );
			 
	return $string;
}
  
  
  
?>