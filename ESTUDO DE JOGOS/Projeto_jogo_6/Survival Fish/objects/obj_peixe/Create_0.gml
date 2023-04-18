
//escolhendo número de ramdom
sorteio = irandom_range(1,6);

scr_setPeixes(sorteio);

if(global.lado > room_width/2){
	lado = "direito";
	image_xscale = -1;
	hspeed = -hspeed;
}else{
	
	lado = "esquerdo";
}