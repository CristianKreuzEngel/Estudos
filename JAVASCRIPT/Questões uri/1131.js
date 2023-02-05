let contGrenais = 0;
let inter = 0;
let gremio = 0;
let empates =0;

let control = 0;
while(control != 2){
    let [a,b]= lines.shift().split(" ").map(a => +a)
    a > b ? inter ++ : a < b ? gremio++ : empates ++
    console.log("Novo grenal (1-sim 2-nao)")
    control = +lines.shift()
    contGrenais ++
}
console.log(`${contGrenais} grenais\nInter:${inter}\nGremio:${gremio}\nEmpates:${empates}`)
inter > gremio ? console.log("Inter venceu mais") : inter < gremio ? console.log("Gremio venceu mais") : console.log("Nao houve vencedor")