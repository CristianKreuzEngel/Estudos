const pegarValoress = (line) => line.split(" ").map(a => +a)
const [a,b,c,d] = pegarValoress(lines.shift())

let lista=[a,b,c,d]
let posição=[1,2,3,4]

for (let i=0;i<4;i++){
        if (lista[i]==1){
            console.log(posição[i])
        }
}