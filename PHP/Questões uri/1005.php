<?php

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

$nota= trim(fgets(STDIN));
$nota1=trim(fgets(STDIN));

$calculo=((($nota*3.5)+($nota1*7.5))/11);

$formato=number_format($calculo,5,'.','');

echo "MEDIA = " . $formato . "\n";

?>  