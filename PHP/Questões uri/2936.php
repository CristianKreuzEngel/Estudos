<?php

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
$curu=trim(fgets(STDIN));
$boi=trim(fgets(STDIN));
$boto=trim(fgets(STDIN));
$mapi=trim(fgets(STDIN));
$iara=trim(fgets(STDIN));

$calculo=(($curu*300)+($boi*1500)+($boto*600)+($mapi*1000)+($iara*150)+225);

echo $calculo."\n"; 

?>