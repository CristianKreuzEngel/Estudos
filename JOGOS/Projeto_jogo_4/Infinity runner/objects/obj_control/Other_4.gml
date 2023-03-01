layerPlataforma = layer_get_id("plataforma");
layerPlataformaSpd = layer_get_hspeed(layerPlataforma);

layerMoita = layer_get_id("Background");
layerMoitaSpd = layer_get_hspeed(layerMoita);

layerNuvem = layer_get_id("Backgrounds2");
layerNuvemSpd = layer_get_hspeed(layerNuvem);

alarm[0] = room_speed * 3;

proximoLado = choose(226, 354);
alarm[1] = room_speed * 2;