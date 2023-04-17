let lenha = (line) => line.split(" ").map(a => +a)
let [x,y] = lenha(lines.shift())

soma=(x/y)
console.log(soma.toFixed(2))