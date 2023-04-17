function scr_movimentation(){
	//movimentação
	if (keyboard_check(vk_left)){
		hspeed= -5;
	}
	if (keyboard_check(vk_right)){
		hspeed = 3;
	}
	if (keyboard_check(vk_up)){
		vspeed= -5;
	}
	if (keyboard_check(vk_down)){
		vspeed= 5;
	}
	//parar de movimentar
	
	if(speed != 0){
		friction = 0.2;
	}
	
	/*
	if (!keyboard_check(vk_left) and hspeed < 0){
		hspeed += 0.5;
	}
	if (!keyboard_check(vk_right) and hspeed > 0){
		hspeed -= 0.5;
	}
	if (!keyboard_check(vk_up) and vspeed < 0){
		vspeed += 0.2;
	}
	if (!keyboard_check(vk_down) and vspeed > 0){
		vspeed -= 0.5;
	}
	*/
}