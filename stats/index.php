<?php include('include/loader.php')?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="en-EN">
<head>
<title>SurvivorStats</title>
<!-- <meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1"/> -->
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>
<meta http-equiv="content-language" content="en" />
<meta name="copyright" content="Copyright (c) 2013 PrivateHiveTools by Nightmare" />
<meta http-equiv="X-UA-Compatible" content="IE=EmulateIE9" />

<link rel="stylesheet" type="text/css" href="css/SurvivorStats.style.css" />
<link rel="stylesheet" type="text/css" href="css/jquery-ui-1.10.3.custom.css" />
<link rel="stylesheet" type="text/css" href="css/dd.css" />

<script src="js/jquery-1.9.0.min.js"></script>
<script src="js/jquery-ui-1.10.3.custom.min.js"></script>
<script type="text/javascript" src="js/jquery.blockUI.js"></script>
<script type="text/javascript" src="js/jquery.jnotify.js"></script>

	<script type="text/javascript"> 
			$(document).ready(function() { 		 		 
					  $('button.menu, a.menu, a.page, a.button, button.link, #submit').click(function() { 
					  $.blockUI({ 
							message:  $('#loading'),
					   css: { 
							 border: 'none', 
							 padding: '15px', 
							 backgroundColor: 'none', 
							 '-webkit-border-radius': '5px', 
							 '-moz-border-radius': '5px',
							 'border-radius': '5px',
							 opacity: .5, 
							 color: '#fff' 
							} 
					  }); 
					  setTimeout($.unblockUI, 3500); 
					  }); 	  
						  
			  });  

			$(function() {  $( document ).tooltip();  });
	</script>
</head>
    	<div id="loading" style="display:none;"><img src="images/loader.gif" /></div>
<body>

	
		

		<div id="content">
			<div id="bar">
		<div style="float:left;"><a class="menu" href="index.php?show=Main">Main</a></div>
		<div style="float:left;"><a class="menu" href="index.php?show=ZKillers">Zombie Kills</a></div>
		<div style="float:left;"><a class="menu" href="index.php?show=BKillers">Bandit Kills</a></div>
		<div style="float:left;"><a class="menu" href="index.php?show=HKillers">Human Kills</a></div>
		<div style="float:left;"><a class="menu" href="index.php?show=Humanity">Humanity</a></div>
		<div style="float:left;"><a class="menu" href="index.php?show=Alive">Alive</a></div>
		</div>
		
			<?php include('include/content.php')?>	
		</div>
		
		<div id="footer"> 
			<span>&copy; 2013 SurvivorStats 0.0.2 by Nightmare</span> &nbsp <a target="_blank" href="http://n8m4re.de">N8M4RE.DE</a>
			<br/>
			<form action="https://www.paypal.com/cgi-bin/webscr" target="_blank" method="post">
			<input type="hidden" name="cmd" value="_s-xclick">
			<input type="hidden" name="hosted_button_id" value="CLJWQMLVHSFJQ">
			<input type="image" src="images/donate.png" border="0" width="104" height="30" name="submit"  alt="Thank you for your BeanZz!!!">
			<img alt="" border="0" src="https://www.paypalobjects.com/de_DE/i/scr/pixel.gif" width="1" height="1">
			</form>
		</div>
		
</body>

</html>