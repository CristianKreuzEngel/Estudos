let linha=+lines.shift()
let coluna=+lines.shift()

let valor1= linha % 2
let valor2= coluna % 2

if (valor1==valor2){
    console.log("1")
}
else{
    console.log("0")
}