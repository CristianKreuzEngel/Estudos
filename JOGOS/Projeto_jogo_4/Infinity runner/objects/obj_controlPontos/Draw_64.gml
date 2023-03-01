if(room == Room1){
	draw_set_halign(fa_left);
	draw_text(20,20,"Pontos: " + string(global.pontos));
}else if(room == Room2){
	draw_set_halign(fa_center);
	draw_set_color(c_black);
	draw_text(room_width/2, room_height/2, "Pontos na Partida: " + string(global.pontos));
	draw_text(room_width/2, room_height/2 + 20, "Record: " + string(global.record));
	
}