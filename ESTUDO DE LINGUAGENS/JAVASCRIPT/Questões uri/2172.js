let control=1
const lenha = (line) => line.split(" ").map(a => +a)
while(control!=0){
    let[valor,xp]=lenha(lines.shift())
    let soma=valor*xp
    if (soma!=0){
        console.log(soma)
    }else{
        control=0
    }
}