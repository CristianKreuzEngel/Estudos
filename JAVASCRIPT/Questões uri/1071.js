let valor=+lines.shift()
let valor1=+lines.shift()
let maximo=0
let minimo=0
let calc=0

if (valor>valor1){
    maximo=valor
    minimo=valor1
}else{
    maximo=valor1
    minimo=valor
}
for(let cont=minimo+1;cont<maximo;cont++){
    if((cont%2)!=0){
        calc+=cont
    }
}
console.log(calc)