<?php
/*****************
SurvivorStats by Nightmare
denis1969@gmx.net 
www.n8m4re.de
******************/


function LatestSurvivor()
{
global $db,$INSTANCE;

		$result = $db->query("SELECT 
									`Character_DATA`.`CharacterID`,
									`Character_DATA`.`PlayerUID`,
									`Character_DATA`.`Generation`,
									`Character_DATA`.`Datestamp`,
									`Player_DATA`.`PlayerName`
								FROM
									`Character_DATA` 
								INNER JOIN
									`Player_DATA` ON `Player_DATA`.`PlayerUID` = `Character_DATA`.`PlayerUID` 
								WHERE 
									`Character_DATA`.`InstanceID` = '".(int)$INSTANCE."' AND `Character_DATA`.`Generation` = '1' 
								GROUP BY 
									`Player_DATA`.`PlayerName`
								ORDER BY 
									`Character_DATA`.`Datestamp` DESC
								LIMIT 10 
								");
 
	 if ( $result->num_rows ) 
	 {
	 
	   echo'<table border="0" cellspacing="2" cellpadding="0" width="99%">
		<br/>';
       while( $row = $result->fetch_assoc() ) 
	   {
	   echo'<tr class="list">
			   <td width="50%">'.$row['PlayerName'].'</td>
			   <td align="right">'.$row['Datestamp'].'</td>
			 </tr>';
	   }
	   echo'</table>';
	 }
	
}




function TopZombieKillers()
{
global $db,$INSTANCE;

				$result = $db->query("SELECT 
                                          *
											FROM
												`Character_DATA`
											INNER JOIN
												`Player_DATA` ON `Player_DATA`.`PlayerUID` = `Character_DATA`.`PlayerUID`
											WHERE 
												`Character_DATA`.`InstanceID` = '".(int)$INSTANCE."' AND `Character_DATA`.`Alive` = '1'
											GROUP BY 
												`Character_DATA`.`PlayerUID`
											ORDER BY 
												`Character_DATA`.`KillsZ` DESC,
												`Character_DATA`.`HeadshotsZ` DESC
											LIMIT 10 
										");
 
 
	 if ( $result->num_rows ) 
	 {
	 
       echo'
			<table border="0" cellspacing="2" cellpadding="0" width="99%">
					<td></td>
					<td align="right">Zombie Kills</td>
					<td align="right">Zombie Headshots</td>
			';
			
       while ( $row = $result->fetch_assoc() ) 
	   { 
	   echo'<tr class="list">
				   <td width="60%">'.$row['PlayerName'].'</td>
				   <td align="right">'.$row['KillsZ'].'</td>
				   <td align="right">'.$row['HeadshotsZ'].'</td>
			   </tr>';
	   }	 
	   echo'</table>';
	 }  
}


function TopBanditKillers()
{
global $db,$INSTANCE;

				$result = $db->query("SELECT 
											*
										FROM
											`Character_DATA` 
										INNER JOIN
											`Player_DATA` ON `Player_DATA`.`PlayerUID` = `Character_DATA`.`PlayerUID` 
										WHERE 
											`Character_DATA`.`InstanceID` = '".(int)$INSTANCE."' AND `Character_DATA`.`Alive` = '1' AND `Character_DATA`.`KillsB` > '0'
										GROUP BY 
											`Character_DATA`.`PlayerUID`
										ORDER BY 
											`Character_DATA`.`KillsB` DESC 	
										LIMIT 10 
											");
 
		if ( $result->num_rows ) 
		{
			echo'<table border="0" cellspacing="2" cellpadding="0" width="99%">
					<td></td>
					<td align="right">Bandit Kills</td>
				 ';
		while( $row = $result->fetch_assoc() ) 
		{
			echo'<tr class="list">
						<td width="60%">'.$row['PlayerName'].'</td>
						<td align="right">'.$row['KillsB'].'</td>
					</tr>
					';
			}
			 echo'</table>';
		}
}


function TopHumanKillers()
{
global $db,$INSTANCE;

				$result = $db->query("SELECT 
											*
										FROM
											`Character_DATA`
										INNER JOIN
											`Player_DATA` ON `Player_DATA`.`PlayerUID` = `Character_DATA`.`PlayerUID` 
										WHERE 
											`Character_DATA`.`InstanceID` = '".(int)$INSTANCE."' AND `Character_DATA`.`Alive` = '1' AND `Character_DATA`.`KillsH` > '0'
										GROUP BY 
											`Character_DATA`.`PlayerUID`
										ORDER BY 
											`Character_DATA`.`KillsH` DESC 	
										LIMIT 10 
											");
 
		if ( $result->num_rows ) 
		{
			echo'<table border="0" cellspacing="2" cellpadding="0" width="99%">
					<td></td>
					<td align="right">Human Kills</td>
				 ';
		while( $row = $result->fetch_assoc() ) 
		{
			echo'<tr class="list">
						<td width="60%">'.$row['PlayerName'].'</td>
						<td align="right">'.$row['KillsH'].'</td>
					</tr>
					';
			}
			 echo'</table>';
		}
}


function TopGoodHumanity()
{
global $db,$INSTANCE;

				$result = $db->query("SELECT 
											*
										FROM
											`Character_DATA`
										INNER JOIN
											`Player_DATA` ON `Player_DATA`.`PlayerUID` = `Character_DATA`.`PlayerUID` 
										WHERE 
											`Character_DATA`.`InstanceID` = '".(int)$INSTANCE."' AND `Character_DATA`.`Alive` = '1' AND `Character_DATA`.`Humanity` > '0'
										GROUP BY 
											`Character_DATA`.`PlayerUID`
										ORDER BY 
											`Character_DATA`.`Humanity` DESC 	
										LIMIT 10 
											");
 
		if ( $result->num_rows )
		{
			echo'<table border="0" cellspacing="2" cellpadding="0" width="99%">
					<td></td>
					<td align="right">Humanity</td>
				 ';
		while( $row = $result->fetch_assoc() ) 
		{
			echo'<tr class="list">
						<td width="60%">'.$row['PlayerName'].'</td>
						<td align="right">'.$row['Humanity'].'</td>
					</tr>
					';
			}
			 echo'</table>';
		}
}


function TopBadHumanity()
{
global $db,$INSTANCE;

				$result = $db->query("SELECT 
											*
										FROM
											`Character_DATA` 
										INNER JOIN
											`Player_DATA` ON `Player_DATA`.`PlayerUID` = `Character_DATA`.`PlayerUID` 
										WHERE 
											`Character_DATA`.`InstanceID` = '".(int)$INSTANCE."' AND `Character_DATA`.`Alive` = '1' AND `Character_DATA`.`Humanity` < '0' 
										GROUP BY 
											`Character_DATA`.`PlayerUID`
										ORDER BY 
											`Character_DATA`.`Humanity` ASC 	
										LIMIT 10 
											");
 
		if ( $result->num_rows ) 
		{
			echo'<table border="0" cellspacing="2" cellpadding="0" width="99%">
					<td></td>
					<td align="right">Humanity</td>
				 ';
		while( $row = $result->fetch_assoc() ) 
		{
			echo'<tr class="list">
						<td width="60%">'.$row['PlayerName'].'</td>
						<td align="right">'.$row['Humanity'].'</td>
					</tr>
					';
			}
			 echo'</table>';
		}
}

function infoBoxStats()
{
global $db,$INSTANCE;

			$survivors = $db->query("SELECT `PlayerUID` FROM `Character_DATA` WHERE `InstanceID` = '".(int)$INSTANCE."' GROUP BY `PlayerUID`");
			$survivors = $survivors->num_rows;
			   
			$alive = $db->query("SELECT `PlayerUID` FROM `Character_DATA` WHERE  `Alive` = '1' AND `InstanceID` = '".(int)$INSTANCE."' ");
			$alive = $alive->num_rows;

			$killz = $db->query("SELECT SUM(`KillsZ`) AS `Total` FROM `Character_DATA` WHERE `InstanceID` = '".(int)$INSTANCE."'");
			$killz = $killz->fetch_assoc();
			$killz = $killz['Total'];

			$headshotsZ = $db->query("SELECT SUM(`HeadshotsZ`) AS `Total` FROM `Character_DATA` WHERE `InstanceID` = '".(int)$INSTANCE."'");
			$headshotsZ = $headshotsZ->fetch_assoc();
			$headshotsZ = $headshotsZ['Total'];


			$killsH = $db->query("SELECT SUM(`KillsH`) AS `Total` FROM `Character_DATA` WHERE `InstanceID` = '".(int)$INSTANCE."'");
			$killsH = $killsH->fetch_assoc();
			$killshuman = $killsH['Total'];

			$killsB = $db->query("SELECT SUM(`KillsB`) AS `Total` FROM `Character_DATA` WHERE `InstanceID` = '".(int)$INSTANCE."' ");
			$killsB = $killsB->fetch_assoc();
			$killsbandit = $killsB['Total'];

			$vehicles = $db->query("SELECT `Classname` FROM `Object_DATA` 
																		WHERE 
																		`Instance` = '".(int)$INSTANCE."' 
																		AND 
																		`Classname` != 'TentStorage' 
																		AND  
																		`Classname` != 'Hedgehog_DZ' 
																		AND 
																		`Classname` != 'Wire_cat1' 
																		AND 
																		`Classname` != 'Sandbag1_DZ' 
																		AND 
																		`Classname` != 'TrapBear'
																		AND 
																		`Classname` != 'Fence_corrugated_DZ'
																		AND 
																		`Classname` != 'ForestCamoNet_DZ'
																		AND 
																		`Classname` != 'Fort_RazorWire'
																		AND 
																		`Classname` != 'Generator_DZ'
																		AND 
																		`Classname` != 'Plastic_Pole_EP1_DZ'
																		AND 
																		`Classname` != 'SandNest_DZ'
																		AND 
																		`Classname` != 'StickFence_DZ'
																		AND 
																		`Classname` != 'StorageShed_DZ'
																		AND 
																		`Classname` != 'TentStorageDomed'
																		AND 
																		`Classname` != 'TentStorageDomed2'
																		AND 
																		`Classname` != 'VaultStorageLocked'
																		AND 
																		`Classname` != 'Wooden_shed_DZ'
																		AND 
																		`Classname` != 'WoodShack_DZ' 
																		");
											
			$vehicles = $vehicles->num_rows;

			$bandit = $db->query("SELECT `PlayerUID` FROM `Character_DATA` WHERE `Humanity` < '0' OR `KillsH` > '0' AND `InstanceID` = '".(int)$INSTANCE."' ");
			$banditalive = $bandit->num_rows;

			$tents = $db->query("SELECT `Classname` FROM `Object_DATA` 
																	WHERE 
																	`Instance` = '".(int)$INSTANCE."' 
																	AND 
																	(
																	`Classname` = 'TentStorage' 
																	OR 
																	`Classname` = 'TentStorageDomed' 
																	OR 
																	`Classname` = 'TentStorageDomed2'
																	)
																	");			
				$tents = $tents->num_rows;


			echo'
			<table border="0" cellspacing="2" cellpadding="0" width="99%">
				<tr class="list">
					<td width="40px"><img width="20" src="images/icons/staticon-unique.gif" alt="" /></td>
					<td> Unique Players: </td>
					<td>'.$survivors.'</td>
				</tr>

				<tr class="list">
					<td><img width="20" src="images/icons/staticon-alive.gif" alt="" /></td>
					<td> Alive Characters: </td>
					<td>'.$alive.'</td>
				</tr>

				<tr class="list">
					<td><img width="20" src="images/icons/staticon-zombies.gif" alt="" /></td>
					<td> Zombies killed: </td>
					<td>'.$killz.'</td>
				</tr>

				<tr class="list">
					<td><img width="20" src="images/icons/staticon-zombies.gif" alt="" /></td>
					<td > Zombie Headshots: </td>
					<td>'.$headshotsZ.'</td>
				</tr>

				<tr class="list">
					<td><img width="20" src="images/icons/staticon-murders.gif" alt="" /></td>
					<td> Murders: </td>
					<td>'.$killshuman.'</td>
				</tr>

				<tr class="list">
					<td><img width="20"src="images/icons/staticon-bandits.gif" alt="" /></td>
					<td> Bandits Alive: </td>
					<td>'.$banditalive.'</td>
				</tr>

				<tr class="list">
					<td><img width="20" src="images/icons/staticon-banditskilled.gif" alt="" /></td>
					<td> Bandits killed: </td>
					<td>'.$killsbandit.'</td>
				</tr>

				<tr class="list">
					<td><img width="20" src="images/icons/vehicle.png" alt="" /></td>
					<td> Vehicles: </td>
					<td>'.$vehicles.'</td>
				</tr>

				<tr>
					<td class="list"><img width="20" src="images/icons/tents.png" alt="" /></td>
					<td> Tents: </td>
					<td>'.$tents.'</td>
				</tr>
			</table>';
}





?>