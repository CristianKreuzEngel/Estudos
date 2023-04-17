let qtd=+lines.shift()
let dentro=0
let fora=0
let x

for (let cont =0; cont<qtd; cont++){
    x=+lines.shift()

    if (x>=10 && x<=20){
        dentro=dentro+1
    }else{
        fora=fora+1
    }
}
console.log(`${dentro} in`)
console.log(`${fora} out`)