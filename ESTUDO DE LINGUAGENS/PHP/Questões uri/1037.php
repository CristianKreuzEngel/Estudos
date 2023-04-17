<?php

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
$t=trim(fgets(STDIN));
if ($t < 0 or $t>100) {
  echo "Fora de intervalo"."\n";
} 
elseif ($t>=0 and $t<=25){
  echo "Intervalo [0,25]"."\n";
}
elseif ($t>=25.01 and $t<=50){
  echo "Intervalo (25,50]"."\n";
}
elseif ($t>=50.01 and $t<=75){
  echo "Intervalo (50,75]"."\n";
}
elseif ($t>=75.01 and $t<=100){
  echo "Intervalo (75,100]"."\n";
}


?>
