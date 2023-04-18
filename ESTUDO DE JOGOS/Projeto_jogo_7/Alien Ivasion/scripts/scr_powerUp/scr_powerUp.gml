// criação power Up e sorteio
function scr_powerUp(){
	var sorteio = irandom(10);
	
	if(sorteio == 9 and global.points > 20) {
		instance_create_layer(room_width+20, irandom_range(50, room_height-50),"Itens", obj_item);
		obj_item.speed = random_range(2,5);
	}

}