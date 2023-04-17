const pegarValoress = (line) => line.split(" ").map(a => +a)
const [a,b,c,d] = pegarValoress(lines.shift())

let calculo=((a+b+c+d)-3)
console.log(calculo)