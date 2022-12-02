<?php

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */

$valor= trim(fgets(STDIN));

$calculo=3.14159*($valor * $valor);

$formato=number_format($calculo,4,'.','');

echo "A=" . $formato . "\n";

?>