const money=(line)=>line.split(" ")
let qtd=+lines.shift()
let coelho=0
let rato=0
let sapo=0
let casos=0
for(let cont=-0;cont<qtd;cont++){
    let[quantia,tipo]=money(lines.shift())
    quantia=parseInt(quantia)
    casos=casos+quantia
    if (tipo=="C"){
        coelho=coelho+quantia
    }
    if(tipo=="R"){
        rato=rato+quantia
    }
    if(tipo=="S"){
        sapo=sapo+quantia
    }
}
let calR=((rato/casos)*100)
let calC=((coelho/casos)*100)
let calS=((sapo/casos)*100)

console.log(`Total: ${casos} cobaias`)
console.log(`Total de coelhos: ${coelho}`)
console.log(`Total de ratos: ${rato}`)
console.log(`Total de sapos: ${sapo}`)
console.log(`Percentual de coelhos: ${calC.toFixed(2)} %`)
console.log(`Percentual de ratos: ${calR.toFixed(2)} %`)
console.log(`Percentual de sapos: ${calS.toFixed(2)} %`)