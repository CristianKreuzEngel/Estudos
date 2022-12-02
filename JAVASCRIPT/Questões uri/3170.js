let bolinha=+lines.shift()
let galhos=+lines.shift()
let soma
if (galhos%2 !== 0){
    Math.floor(galhos)
    
    soma=((galhos/2)-bolinha)
}else{
    soma=((galhos/2)-bolinha)
}

if (soma<=0 || soma===bolinha){
    console.log("Amelia tem todas bolinhas!")
}else{
    console.log(`Faltam ${Math.floor(soma).toFixed(0)} bolinha(s)`)
}