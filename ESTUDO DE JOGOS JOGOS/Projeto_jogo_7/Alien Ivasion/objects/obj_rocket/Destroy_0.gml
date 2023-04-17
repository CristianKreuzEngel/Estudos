effect_create_below(ef_cloud,x,y,1,c_grey);
repeat(32){
	instance_create_layer(x+irandom_range(-5,5), y+irandom_range(-5,5),"instances", obj_particle);
}