y = clamp(y, 239.5, 339.5);

if(mouse_check_button_pressed(mb_left)){
	
	switch(lado){
		
		case "cima":
			lado = "baixo";
			vspeed = 5;
		break;
		
		case "baixo":
			lado = "cima"
			vspeed = -5;
		break;
			
	}
}
if (x < -50){
	room_goto_next();
}