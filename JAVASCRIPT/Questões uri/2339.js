const lenha=(line)=>line.split(" ").map(a=>+a )
let [comp,qtd,folha]=lenha(lines.shift())
let soma=((qtd/folha)/comp)
if (soma>=1){
    console.log("S")
}else{
    console.log("N")
}