const pegarValoress = (line) => line.split(" ").map(a => +a)
const [a,b,c] = pegarValoress(lines.shift())

let triangulo=(((a*c)/2))
let roda = ((c*c)*3.14159)
let trap=(((a +b)*c)/2)
let retan=(a*b)
let mine=(b*b)

console.log(`TRIANGULO: ${triangulo.toFixed(3)}`)
console.log(`CIRCULO: ${roda.toFixed(3)}`)
console.log(`TRAPEZIO: ${trap.toFixed(3)}`)
console.log(`QUADRADO: ${mine.toFixed(3)}`)
console.log(`RETANGULO: ${retan.toFixed(3)}`)
