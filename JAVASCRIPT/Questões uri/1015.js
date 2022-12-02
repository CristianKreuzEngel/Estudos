let pegarValores = (line) => line.split(" ").map(a => +a)
let [x1,y1] = pegarValores(lines.shift())

let pegarValoress = (line) => line.split(" ").map(a => +a)
let [x2,y2] = pegarValoress(lines.shift())

let soma= Math.sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))

console.log(soma.toFixed(4))