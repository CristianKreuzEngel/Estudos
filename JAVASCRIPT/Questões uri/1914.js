let qtd = +lines.shift();
for (let i = 0; i < qtd; i++){
    let[nome1, escolha1, nome2, escolha2] = lines.shift().split(" ");
    let[a,b] = lines.shift().split(" ").map(a => +a);
    let calc = (a+b)%2;
    if (calc == 0 && escolha1 == 'PAR'){
        console.log(nome1);
    }else if (calc == 0 && escolha2 == 'PAR'){
        console.log(nome2)
    }else if (calc != 0 && escolha2 == 'IMPAR'){
        console.log(nome2)
    }else if (calc != 0 && escolha1 == 'IMPAR'){
        console.log(nome1)
    }
}