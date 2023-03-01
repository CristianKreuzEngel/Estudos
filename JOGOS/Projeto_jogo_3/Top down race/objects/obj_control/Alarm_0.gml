var proximoCarro = choose(1,2,3);
var proximoLado = choose(1,2,3);

switch(proximoCarro){
	
	case "1": 
		if(proximoLado == 1){
			instance_create_layer(180, -150,"instances",obj_car1);
		}
		if (proximoLado == 2){
			instance_create_layer(302, -150,"instances",obj_car1);
		}
		if (proximoLado == 3){
			instance_create_layer(choose(160, 224, 288, 322), -150,"instances",choose(obj_obstaculo1, obj_obstaculo2));
		}
		
	break;
	
	case "2":
		if(proximoLado == 1){
			instance_create_layer(180, -150,"instances",obj_car2);
		}
		if (proximoLado == 2){
			instance_create_layer(302, -150,"instances",obj_car2);
		}

		if (proximoLado == 3){
			instance_create_layer(choose(160, 224, 288, 322), -150,"instances",choose(obj_obstaculo1, obj_obstaculo2));
		}
	break;
		
	case "3":
		if(proximoLado == 1){
			instance_create_layer(180, -150,"instances",obj_car3);
		}
		if (proximoLado == 2){
			instance_create_layer(302, -150,"instances",obj_car3);
		}

		if (proximoLado == 3){
			instance_create_layer(choose(160, 224, 288, 322), -150,"instances",choose(obj_obstaculo1, obj_obstaculo2));
		}
	break;
}
alarm[0] = 50;
