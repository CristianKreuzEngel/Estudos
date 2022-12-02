const pegarValoress = (line) => line.split(" ").map(a => +a)
const [a,b] = pegarValoress(lines.shift())

let soma=(((b-a)*100)/a)
console.log(`${soma.toFixed(2)}%`)