//exibindo o timer personalisado
fontNumber = font_add_sprite_ext(spr_fontNumber,"0123456789",true, 2);
draw_set_font(fontNumber);
draw_text_transformed(room_width/2, 40,contador,0.5,0.5,0);