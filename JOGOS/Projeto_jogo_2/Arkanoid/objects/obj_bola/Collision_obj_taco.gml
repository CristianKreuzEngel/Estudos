if (saiu == true) {
	move_bounce_solid(true);
	direction = point_direction(other.x, other.y,x,y);
	audio_play_sound(snd_colisao, 10,false);
}