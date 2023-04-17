const lenha = (line) => line.split(" ").map(a => +a)
const [a,b,c] = lenha(lines.shift())
let x
let y

if (a === 0 || (((b**2)-4*a*c)<0)){
    console.log("Impossivel calcular")
}else{
    x=(-b +((b*b)-4*a*c)**(1/2))/(2*a)
    y=(-b -((b*b)-4*a*c)**(1/2))/(2*a)
    console.log(`R1 = ${x.toFixed(5)}`)
    console.log(`R2 = ${y.toFixed(5)}`)
}