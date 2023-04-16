scr_movimentation();
if (keyboard_check_pressed(vk_space)){
		if(tiroEspecial){
			var inst = instance_create_layer(x+25, y-10, "Instances", obj_shot);
			var inst2 = instance_create_layer(x+25, y, "Instances", obj_shot);
			var inst3 = instance_create_layer(x+25, y+10, "Instances", obj_shot);
			inst.hspeed = 15;
			inst2.hspeed = 15;
			inst3.hspeed = 15;
			effect_create_below(ef_flare,x+35,y,0,c_gray);
			
		}else{
			var inst = instance_create_layer(x+25, y, "Instances", obj_shot);
			inst.hspeed = 10;
			effect_create_below(ef_flare,x+35,y,0,c_gray);
		}
}

