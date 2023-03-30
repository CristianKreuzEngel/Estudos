// Script assets have changed for v2.3.0 see
// https://help.yoyogames.com/hc/en-us/articles/360005277377 for more information
function scr_movimentacao(){
	if (keyboard_check(vk_right)){
		x+=speedMoviment;
		image_angle = 0;
	}
	if (keyboard_check(vk_left)){
		x-=speedMoviment;
		image_angle = 180;
	}
	if (keyboard_check(vk_up)){
		y-=speedMoviment;
		image_angle = 90;
	}
	if (keyboard_check(vk_down)){
		y+=speedMoviment;
		image_angle = 270;
	}
}
