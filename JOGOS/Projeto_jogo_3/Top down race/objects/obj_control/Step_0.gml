global.posiMouseX = mouse_x;
global.mouseClick = mouse_check_button(mb_left);
global.farol = mouse_check_button(mb_right);

mPercorridos ++;
	
if (mPercorridos > 1000 && mPercorridos < 2000){
	
	kmFaltantes = 1;
	
}else if (mPercorridos > 2000){
	kmFaltantes = 0;
	global.passaFase = true;
}