let x=0
let y=1
const lenha = (line) => line.split(" ").map(a => +a)
let conte=1

while (conte!=0){
    const [x,y] = lenha(lines.shift())
    if(x>y){
        console.log("Decrescente")
    }
    if(x<y){
        console.log("Crescente")
    }
    if (x==y){
        conte=0
    }

}
