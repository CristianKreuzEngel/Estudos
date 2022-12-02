let qtd=+lines.shift()
let soma=0
for (let cont=0;cont<qtd;cont++){
    let valor=+lines.shift()
    soma=valor%2
    if (soma==0){
        console.log(soma)
    }else{
        console.log(1)
    }
    
}