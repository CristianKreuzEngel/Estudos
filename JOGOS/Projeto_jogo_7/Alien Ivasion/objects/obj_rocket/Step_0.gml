scr_movimentation();
if(keyboard_check(vk_space)){
	//váriavel vai armazenar o id da instancia
	var inst = instance_create_layer(x+25, y, "Instances", obj_shot);
	inst.direction = 0;
	inst.hspeed = 10;

}