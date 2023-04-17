if(global.passaFase == true && instance_exists(obj_player)){
	room_goto_next();
}
if(global.colidiu == true){
	audio_stop_sound(snd_fundo);
	instance_deactivate_object(obj_player);
	global.colidiu = false;
	alarm[0] = 120;
}