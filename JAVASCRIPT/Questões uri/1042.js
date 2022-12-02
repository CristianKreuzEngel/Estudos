const lenha = (line) => line.split(" ").map(a => +a)
const [a,b,c] = lenha(lines.shift())
lista=[a,b,c]


function Srt(a, b){ return a-b
}

lista.sort(Srt)

console.log(lista[0])
console.log(lista[1])
console.log(lista[2])
console.log()
console.log(a)
console.log(b)
console.log(c)