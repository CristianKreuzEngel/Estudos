let input =require('fs').readFileSync('./dev/stdin/flie.txt', 'utf8')
let lines = input.split('\n')

let indicador = lines.shift();
let matriz = [[],[],[],[],[],[],[],[],[],[],[],[]];
let resultado = 0;
let cont = 0;
for(let lin = 0; lin < 12; lin++){
    for(let col = 0; col < 12; col++){
        let valor = +lines.shift();
        matriz[lin][col] = valor;
    }
}

for(let i =0; i<11; i++){
    for(let col = i+1; col < 12 ; col++){
        resultado += matriz[i][col];
        cont++;
    }
}
indicador === "M\r" ? console.log((resultado/66).toFixed(1)) : console.log(resultado.toFixed(1));