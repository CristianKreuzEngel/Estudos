if (!instance_exists(obj_bloco_cinza) && !instance_exists(obj_bloco_azul) && !instance_exists(obj_bloco_roxo) && !instance_exists(obj_bloco_verde)
&& !instance_exists(obj_bloco_vermelho) && !instance_exists(obj_bloco_amarelo) ){
	
	if (room == Room3) {
		room_goto(Room1);
	}else{
		room_goto_next();
	}
	audio_play_sound(snd_levelUp, 10,false);
}