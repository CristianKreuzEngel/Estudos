let maior=0
let posicao=0
for(cont=1;cont<101;cont++){
    let valor=+lines.shift()
    if (valor>maior){
        maior=valor
        posicao=cont
    }
}
console.log(maior)
console.log(posicao)