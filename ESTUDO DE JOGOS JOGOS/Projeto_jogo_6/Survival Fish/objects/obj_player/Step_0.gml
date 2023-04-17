//limite velocidade vertical e horizontal
vspeed = clamp(vspeed, -speedMax, speedMax);
hspeed = clamp(hspeed, -speedMax, speedMax);

//limitando o eixo Y do player

y = clamp(y, 0, room_height - 25);

//Aplicando gravidade vertical
if (!chao) {
	vspeed += 0.02;
}

//parando o peixe quando o jogador soltar as teclas A e D

if ((!keyboard_check(ord("A"))) and (hspeed < 0)){
	hspeed += 0.02;
}
if ((!keyboard_check(ord("D"))) and (hspeed > 0)){
	hspeed -= 0.02;
}
	