const lenha = (line) => line.split(" ").map(a => +a)
let produtos=+lines.shift()
let conta=0
for(let cont=0; cont<produtos;cont++){
    let [cod,qtd] = lenha(lines.shift())
    if(cod==1001){
        conta=conta+(qtd*1.50)
    }
    if(cod==1002){
        conta=conta+(qtd*2.50)
    }
    if(cod==1003){
        conta=conta+(qtd*3.50)
    }
    if(cod==1004){
        conta=conta+(qtd*4.50)
    }
    if(cod==1005){
        conta=conta+(qtd*5.50)
    }
}
console.log(conta.toFixed(2))