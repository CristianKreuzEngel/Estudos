var sorteioNiguel = irandom(10);
var repetirLado = irandom(3);

if(sorteioNiguel > 8){
	instance_create_layer(room_width + 50, proximoLado, "obstaculos", obj_moeda);
}else{
	instance_create_layer(room_width + 50, proximoLado, "obstaculos", obj_bolha);
}

if (repetirLado != 3){
	if(proximoLado == 226){
		
		proximoLado = 354;
		
	}else if(proximoLado == 354){
		
		proximoLado = 226;
	}
}

alarm[1] = room_speed * 1