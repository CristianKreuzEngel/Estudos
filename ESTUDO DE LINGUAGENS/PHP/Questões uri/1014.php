<?php

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
$a= trim(fgets(STDIN));
$b=trim(fgets(STDIN));


$calculo=($a/$b);
$formato=number_format($calculo,3,'.','');

echo  $formato. " km/l". "\n";

?>
