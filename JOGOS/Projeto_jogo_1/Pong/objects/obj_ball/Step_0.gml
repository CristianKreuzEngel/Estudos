if(global.modoJogo == 1) {
		if (x <= 0){
		instance_destroy(obj_ball);
		show_message("Você é fraco lhe falta ódio! - Total de ódio: " + string(global.pongs));
		game_restart();
	}

	if (x > room_width){
		instance_destroy(obj_ball);
		show_message("Você é digno de entrar no mundo dos animes - Total de ódio: " + string(global.pongs));
		game_restart();
	}
}else{
		if (x <= 0){
		instance_destroy(obj_ball);
		show_message("Player 2 ganhou!");
		room_restart();
		global.pongs = 0;
	}

	if (x > room_width){
		instance_destroy(obj_ball);
		show_message("Player 1 ganhou!");
		room_restart();
		global.pongs = 0;

	}
}