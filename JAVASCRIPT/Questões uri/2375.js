const lenha = (line) => line.split(" ").map(a => +a)
let diametro=+lines.shift()
let[altura,largura,profundidade]=lenha(lines.shift())
if (diametro>altura || diametro>largura||diametro>profundidade){
    console.log("N")
}else{
    console.log("S")
}