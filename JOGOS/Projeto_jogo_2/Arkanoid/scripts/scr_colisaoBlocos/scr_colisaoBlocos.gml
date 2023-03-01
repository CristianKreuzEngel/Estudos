//sitema de colisão
function scr_colisaoBlocos(){
	
	//rebatendo a bola
	move_bounce_all(true);
	
	//desruindo o bloco
	instance_destroy(other);
	
	//somando Pontos
	global.pontuacao += 5;
	
	//atualizando o Record
	if ( global.pontuacao > global.record ){
		global.record = global.pontuacao;
	}
	
	
}
//sistema de power up
function scr_powerUp(){
	
	randomize();
	var sorteio = irandom(10);
	
	if(sorteio == 10) {
		instance_create_layer(x,y,"Itens", obj_powerUp);
		audio_play_sound(snd_powerUp_1, 10,false);
	}
	
}