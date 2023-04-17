hspeed = layer_get_hspeed("plataforma");

if(x < -100){
	global.pontos += 10;
	scr_controleRecord();
	instance_destroy();
}