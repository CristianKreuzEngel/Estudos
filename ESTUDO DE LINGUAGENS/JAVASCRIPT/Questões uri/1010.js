let pegarValores = (line) => line.split(" ").map(a => +a)
let [a,b,c] = pegarValores(lines.shift())

let pegarValoress = (line) => line.split(" ").map(a => +a)
let [a1,b1,c1] = pegarValoress(lines.shift())

let soma=((b*c)+(b1*c1))
console.log(`VALOR A PAGAR: R$ ${soma.toFixed(2)}`)

