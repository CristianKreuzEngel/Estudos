//criar inimigos
var currentPoints = global.points;
var enemy = instance_create_layer(room_width+20, irandom_range(50, room_height-50), "instances", choose(obj_enemy, obj_enemy2, obj_enemy3, obj_enemy4, obj_enemy5));

enemy.speed = random_range(2,4);
if(currentPoints < 10){
	alarm[0] = room_speed * random_range(2,3);
}else if(currentPoints >= 10 and currentPoints < 20){
	alarm[0] = room_speed * random_range(1.5,2.5);
}else if(currentPoints >= 20 and currentPoints < 30){
	alarm[0] = room_speed * random_range(1,2);	
}else if(currentPoints >= 30 and currentPoints < 50){
	alarm[0] = 60;	
}else{
	alarm[0] = 30;
}
scr_powerUp();