//posição vertical dos peixes
var posVertical = random_range(50, room_height-50);

//definindo o lado do peixe
global.lado = choose(-50, room_width+50);

//criando os peixes
instance_create_layer(global.lado, posVertical, "Instances", obj_peixe);

if(contador <= 30){
	
	alarm_set(alarm[0], room_speed*2);	
	
}else if (contador > 30 and contador <= 60){
	
	alarm_set(alarm[0], room_speed*1.5);	
	
}else{
	
	alarm_set(alarm[0], 60);

}
