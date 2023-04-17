let bo = 0;
let ar = 0;
let mu = 0;
let de = 0;
let soma = 0;
let qtd = +lines.shift();
for (let i = 0; i < qtd; i++){
    let calc = 0
    let [nome, tipo, horas] = lines.shift().split(" ");
    horas = parseInt(horas);
    if (tipo == 'bonecos'){
        calc = horas/8
        bo +=calc;
    }else if (tipo == 'arquitetos'){
        calc = horas/4
        ar +=calc;
    }else if (tipo == 'musicos'){
        calc = horas/6
        mu +=calc;
    }else if (tipo == 'desenhistas'){
        calc = horas/12
        de +=calc;
    }
}
soma = Math.floor(bo) + Math.floor(mu) + Math.floor(ar) + Math.floor(de)
console.log(soma)