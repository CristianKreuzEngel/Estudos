const lenha =(line)=>line.split(" ").map(a=>+a)
let [abas,acao]=lenha(lines.shift())
let fechou=0
let clicou=0
for (let cont=0; cont<acao; cont++){
    let aca=lines.shift()
    if (aca=="fechou"){
        abas=abas+1
    }
    if (aca=="clicou"){
        abas=abas-1
    }
}
console.log(abas)