let input =require('fs').readFileSync('./dev/stdin/flie.txt', 'utf8')
let lines = input.split('\n')

let valor = +lines.shift()
if(valor == 1){
    console.log("January")
}else if(valor == 2){
    console.log("February")
}else if(valor == 3){
    console.log("March")
}else if(valor == 4){
    console.log("April")
}else if(valor == 5){
    console.log("May")
}else if(valor == 6){
    console.log("June")
}else if(valor == 7){
    console.log("July")
}else if (valor == 8){
    console.log("August")
}else if (valor == 9){
    console.log("September")
}else if (valor == 10){
    console.log("October")
}else if(valor == 11){
    console.log("November")
}else if(valor == 12){
    console.log("December")
}