if (global.mouseClick == true) {
	x = lerp(x, global.posiMouseX, 0.05);
}
x = clamp(x,128,352);

if (global.farol == true){
	if(!instance_exists(obj_farol)){
		instance_create_layer(x, y-50,"instances", obj_farol);
	}
}else{
	instance_destroy(obj_farol);
}