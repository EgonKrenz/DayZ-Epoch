<?php defined('SurvivorStats') or die('no direct access');?>
<br/>
<form method="post" action="?show=<?php echo $_GET['show']?>&page=1">
<table class="slist" border="0" cellspacing="2" cellpadding="0" width="100%">
		<tr>
			<td width="10%"><input style="margin-bottom:2px;" name="search" maxlength="50" size="25" type="text" placeholder="Name or PlayerUID.." /> </td>
			<td><button class="tab" id="submit" value="" name="submit" ><img width="15" src="images/icons/Search.png" /></button></td>
		</tr>	
</table>
</form>
<h2>Zombie Kills</h2>
<table class="slist border" border="0" cellspacing="1" cellpadding="1">

	<th class="border" align="center" width="250">Name</th>
	<th class="border" align="center" width="200">Zombie Kills</th>
	<th class="border" align="center" width="200">Zombie Headshots</th>
	<th class="border" align="center" width="200">Bandit Kills</th>
	<th class="border" align="center" width="200">Human Kills</th>
	<th class="border" align="center" width="200">Alive</th>
	<th class="border" align="center" width="200">Humanity</th>

<?php showZKillers()?>
</table>

