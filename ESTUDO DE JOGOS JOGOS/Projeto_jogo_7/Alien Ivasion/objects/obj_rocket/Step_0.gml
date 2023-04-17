scr_movimentation();
if (keyboard_check(vk_space)){
	
	if(!intervaloTiro){
		var inst = instance_create_layer(x+25, y, "Instances", obj_shot);
		inst.hspeed = 10;
		effect_create_below(ef_flare,x+35,y,0,c_gray);
		intervaloTiro = true;
		alarm[0] = 30;
	}
}