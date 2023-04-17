let nume=+lines.shift()
let cafe=lines.shift()
let lista=cafe.split(" ")
const listaC = lista.map (str => {
    return Number (str)})
let menor=listaC[0]
let posicao=0
for(let cont=0;cont<nume;cont++){
    if (listaC[cont]<menor){
        menor=listaC[cont]
        posicao=cont
    }
}
console.log(`Menor valor: ${menor}`)
console.log(`Posicao: ${posicao}`)