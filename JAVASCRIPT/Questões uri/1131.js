const lenha = (line) => line.split(" ").map(a => +a)

let control=0
let inter=0
let gremio=0
let contador=0
let empate=0

while (control!=2){
    const [a,b] = lenha(lines.shift())
    control=+lines.shift()
    if (a>b){
        inter=inter+1
    }
    if (a<b){
        gremio=gremio+1
    }
    if (a==b){
        empate=empate+1
    }
    console.log("Novo grenal (1-sim 2-nao)")
    contador=contador + 1
}
console.log(`${contador} grenais`)
console.log(`Inter:${inter}`)
console.log(`Gremio:${gremio}`)
console.log(`Empates:${empate}`)
if (empate>inter && empate>gremio){
    console.log(`Nao houve vencedor`)
}
if (inter>gremio){
    console.log(`Inter venceu mais`)
}
if (gremio>inter){
    console.log(`Gremio venceu mais`)
}