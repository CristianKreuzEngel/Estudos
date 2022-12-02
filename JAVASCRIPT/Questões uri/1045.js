let aux
const lenha = (line) => line.split(" ").map(a => +a)
let[primeiro,segundo,terceiro]=lenha(lines.shift())

if (terceiro > segundo){
    aux = terceiro
    terceiro = segundo
    segundo = aux
}
if (segundo > primeiro){
    aux = segundo
    segundo = primeiro
    primeiro = aux
}
if (terceiro > segundo){
    aux = terceiro
    terceiro = segundo
    segundo = aux
}
let a = primeiro
let b = segundo
let c = terceiro

if (a>=b+c){
    console.log("NAO FORMA TRIANGULO")
}
else if ((a**2)==((b**2)+(c**2))){
    console.log("TRIANGULO RETANGULO")
}
else if ((a**2)>((b**2)+(c**2))){
    console.log("TRIANGULO OBTUSANGULO")
}
else if ((a**2)<((b**2)+(c**2))){
    console.log("TRIANGULO ACUTANGULO")
}
if (a==b && a==c){
    console.log("TRIANGULO EQUILATERO")
}
else if (a==b || a==c||b==c||b==a){
    console.log("TRIANGULO ISOSCELES")
}