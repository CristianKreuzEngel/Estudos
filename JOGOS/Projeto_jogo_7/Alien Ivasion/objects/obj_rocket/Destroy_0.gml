effect_create_below(ef_cloud,x,y,1,c_grey);
repeat(32){
	instance_create_layer(x, y,"instances", obj_particle);
}

global.rocketExisting = false;