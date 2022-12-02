let qtd=+lines.shift()
const pegarValoress = (line) => line.split(" ").map(a => +a)
for (let cont =0; cont<qtd; cont++){
        const [x,y] = pegarValoress(lines.shift())
        if (y==0){
                console.log("divisao impossivel")
        }
        else if (y!=0){
        let soma=x/y
        console.log(soma.toFixed(1))
        }
}
