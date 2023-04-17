let qtd=+lines.shift()
const pegarValoress = (line) => line.split(" ").map(a => +a)
for (let cont =0; cont<qtd; cont++){
        const [raio1,raio2] = pegarValoress(lines.shift())
        let soma=raio1+raio2
        console.log(soma)
}