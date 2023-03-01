//posição vertical dos peixes
var posVertical = random_range(50, room_height-50);
//definindo o lado do peixe
global.lado = choose(-50, room_width+50);

instance_create_layer(global.lado, posVertical, "Instances", obj_peixe);
alarm_set(alarm[0], room_speed*2);