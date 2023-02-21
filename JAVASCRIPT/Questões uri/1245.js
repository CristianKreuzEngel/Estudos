while (lines.length!=0) {
    let qtd = lines.shift();
    if(!qtd){
        break;
    }
    qtd = parseInt(qtd);
    let sapatos = Array(61);
    for (let c = 0; c < 61; c++){
        sapatos[c]= [0, 0];
    }
    for(let i =0; i < qtd; i++){
        let [numero, lado] = lines.shift().trim().split(" ");
        numero = parseInt(numero);
        lado === 'D' ? sapatos[numero][0] += 1 : sapatos[numero][1] += 1
    }
    let pares = sapatos.reduce((acc, cur) => (acc += Math.min(cur[0],cur[1])), 0);
    console.log(pares)
 }