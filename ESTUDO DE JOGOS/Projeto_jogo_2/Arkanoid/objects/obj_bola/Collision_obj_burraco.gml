global.vidas --;
if (global.vidas < 1){
	global.pontuacao = 0;
	global.vidas = 3;
	room_goto(Room1);
	audio_play_sound(snd_gameOver, 10,false);	
}
else{
	instance_destroy();
	instance_create_layer(obj_taco.x, ystart,"instances",obj_bola);
	audio_play_sound(snd_derrota, 10,false);
}