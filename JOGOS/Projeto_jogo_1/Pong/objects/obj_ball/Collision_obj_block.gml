if (global.modoJogo == 1) {
	if(obj_block.image_alpha > 0){
		move_bounce_solid(true);
		speed +=1;
		obj_block.image_alpha -=0.05;
		effect_create_above(ef_smokeup, x+16, y, 0, c_white);
		global.pongs++
	}else{
		instance_destroy(other);
	} 	
}else if (global.modoJogo == 2) {
	move_bounce_solid(true);
	global.pongs++
	speed += 1;
	
}