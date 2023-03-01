//acelerando as layers

layerPlataformaSpd -= 0.2;
layerMoitaSpd -= 0.2;
layerNuvemSpd -= 0.1;

layer_hspeed(layerPlataforma, layerPlataformaSpd);
layer_hspeed(layerMoita, layerMoitaSpd);
layer_hspeed(layerNuvem, layerNuvemSpd);

alarm_set(alarm[0], room_speed * 3)