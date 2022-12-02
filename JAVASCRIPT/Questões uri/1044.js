let lenha = (line) => line.split(" ").map(a => +a)
let [a,b] = lenha(lines.shift())

if ((b%a===0) || (a%b ===0)){
    console.log("Sao Multiplos")
}else{
    console.log("Nao sao Multiplos")
}
