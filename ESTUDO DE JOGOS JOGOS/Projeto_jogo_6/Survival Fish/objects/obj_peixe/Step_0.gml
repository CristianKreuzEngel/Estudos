//mudando a direção vertical se o peixe for 3

if(sorteio == 3){
	if(y>= room_height-50 or y<= 50){
		vspeed *=-1
	}
}


//destruindo os peixes

if(lado == "direito" and x <= -50){
	
	instance_destroy();
	
}else if (lado == "esquerdo" and x > room_width + 50){
	
	instance_destroy();

}