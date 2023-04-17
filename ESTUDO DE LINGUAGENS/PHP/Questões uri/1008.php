<?php

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

$a= trim(fgets(STDIN));
$b=trim(fgets(STDIN));
$c=trim(fgets(STDIN));


$calculo=($b*$c);
$formato=number_format($calculo,2,'.','');

echo "NUMBER = " . $a . "\n";
echo "SALARY = U$ " . $formato . "\n";
?>
