let control = 1;
while(control == 1){
    let qtd = +lines.shift()
    if(qtd == 0){
        control = 0;
        break;
    }
    let pessoas = lines.shift().split(" ").map(a => +a)
    let maior = Math.max(...pessoas)
    let sus = 0
    let aux = 0
    for(let i = 0; i < qtd; i++){
        if(pessoas[i] > aux && pessoas[i] != maior){
            aux = pessoas[i];
            sus = i+1;
        }
    }
    console.log(sus);
}
