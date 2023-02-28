<?php
$valor1 = explode(" ", fgets(STDIN));
$valor2 = explode(" ", fgets(STDIN));
$conta = number_format(($valor1[1] * $valor1[2]) + ($valor2[1] * $valor2[2]), 2, '.', '');
echo "VALOR A PAGAR: R$ ". $conta . "\n";
?>