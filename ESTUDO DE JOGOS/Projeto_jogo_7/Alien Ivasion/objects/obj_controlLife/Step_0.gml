if(global.lifeGalaxy <= 0){
	var player = instance_find(obj_rocket, 0);
	instance_destroy(player);
}
if(global.rocketExisting == false){
	global.rocketExisting = true;
	alarm[0] = room_speed*2;
}