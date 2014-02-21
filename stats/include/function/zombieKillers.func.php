<?php

/*****************
SurvivorStats by Nightmare
denis1969@gmx.net 
www.n8m4re.de
******************/


function showZKillers()
{
global $db,$INSTANCE;

	if ( isset($_GET['page']) && !empty($_GET['page']) && is_numeric($_GET['page']) )
	{ 
		$page = $_GET['page'];
	} else {
		$page = 1;
	}
		
	$limit = 50;
	$limit1 = ($page - 1) * $limit; 
	
	$result = $db->query("SELECT 
                                  `Character_DATA`.`CharacterID`
								FROM
									`Character_DATA` 
								INNER JOIN
									`Player_DATA` ON `Player_DATA`.`PlayerUID` = `Character_DATA`.`PlayerUID`
								WHERE 
									`Character_DATA`.`InstanceID` = '".(int)$INSTANCE."' AND `Character_DATA`.`Alive` = '1'
								GROUP BY 
									`Character_DATA`.`PlayerUID`
								");
	$seiten	= $result->num_rows / $limit;
	echo '<strong>Page:</strong>';
	for($i = 1; $i - 1< $seiten; $i++) {
	echo ' &nbsp <a class="page" id="submit" href="?show='.$_GET['show'].'&page='.$i.'" >'.$i.'</a>';
	}
    echo '<br/><br/><br/>';

	if ( isset($_POST['submit']) && !empty($_POST['search']) ) 
	{  
		$SEARCH = secure($_POST['search']);			
	} else {
		$SEARCH = false;
	} 

		
   $result = $db->query("SELECT 
				             *
							FROM
								`Character_DATA`
							INNER JOIN
								`Player_DATA` ON `Player_DATA`.`PlayerUID` = `Character_DATA`.`PlayerUID`
							WHERE 
								`Character_DATA`.`InstanceID` = '".(int)$INSTANCE."' AND `Alive` = '1' AND ( `Player_DATA`.`PlayerName` LIKE '%".$SEARCH."%' OR `Player_DATA`.`PlayerUID` LIKE '%".$SEARCH."%' )
							GROUP BY 
							    `Character_DATA`.`PlayerUID`
							ORDER BY 
								`Character_DATA`.`KillsZ` DESC,
							    `Character_DATA`.`HeadshotsZ`DESC
							LIMIT 
								".(int)secure($limit1).", ".(int)secure($limit)."
								");
 
 
	if ( $result->num_rows == true ) 
	{

       while( $row = $result->fetch_assoc() ) 
	   { 
	   
			$oldDate = strtotime($row['Datestamp']);    
			$actDate = time();           
			$diffDate = ($actDate-$oldDate);        
			$days = floor($diffDate / 24 / 60 / 60 );   
			$diffDate = $diffDate - ($days*24*60*60);   
			$hours = floor($diffDate / 60 / 60);      
			$diffDate = ($diffDate - ($hours*60*60));
			$minutes = floor($diffDate/60);            
			$diffDate = $diffDate - ($minutes*60);
			$seconds = floor($diffDate);      
			$age = $days.'&nbspDayZ &nbsp'.$hours.'h :&nbsp'.$minutes.'m :&nbsp'.$seconds.'s';

		   echo '<tr class="list">
				   <td align="center"><strong>'.$row['PlayerName'].'</strong><br/>'.$row['PlayerUID'].'</td>
				   <td align="center" class="rubrik">'.$row['KillsZ'].'</td>
				   <td align="center" class="rubrik">'.$row['HeadshotsZ'].'</td>
				   <td align="center">'.$row['KillsB'].'</td>
				   <td align="center">'.$row['KillsH'].'</td>
				   <td align="center">'.$age.'</td>
				   <td align="center">'.$row['Humanity'].'</td>
			
				</tr>';
		   }   
	 }  
}
?>