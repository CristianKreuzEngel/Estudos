let oredm = ['N','L','S','O']
let control = 1;
while( control == 1){
    let aux = 0;
    let qtd = +lines.shift();
    if (qtd == 0){
        control = 0;
        break;
    }else{
        let ori = lines.shift().split("");
        for(let i = 0; i < qtd; i++){
            if(ori[i] == 'D'){
                aux += 1;
            }else if(ori[i] == 'E'){
                aux -= 1
            }
            if (aux > 3){
                aux = 0
            }
            if (aux < 0){
                aux = 3
            }
        }
        console.log(oredm[aux])
    }
}