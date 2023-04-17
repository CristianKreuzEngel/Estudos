<?php

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

$nota= trim(fgets(STDIN));
$nota1=trim(fgets(STDIN));
$nota2=trim(fgets(STDIN));

$calculo=((($nota*2)+($nota1*3)+($nota2*5))/10);

$formato=number_format($calculo,1,'.','');

echo "MEDIA = " . $formato . "\n";

?>