let qtd=+lines.shift()
const pegarValoress = (line) => line.split(" ").map(a => +a)
let colocado=0
let maiorNota=0
for (let cont =0; cont<qtd; cont++){
        const [matri,nota] = pegarValoress(lines.shift())
        if (nota>=8){
            if(nota >maiorNota){
                maiorNota=nota
                colocado=matri
            }
        }
   }
if (maiorNota>=8){
    console.log(colocado)
}
else if (maiorNota<8){
    console.log("Minimum note not reached")
}