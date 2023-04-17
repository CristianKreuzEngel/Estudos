
let alfaM = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'];

let alfam = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'];

let qtd = +lines.shift();
for(let i = 0; i < qtd; i++){
    let valor = lines.shift().split("");
    let a = parseInt(valor[0]);
    let b = parseInt(valor[2]);
    verificadorM = alfaM.some(a => a == valor[1]);
    verificadorN = alfam.some(a => a == valor[1]);
    if (a == b){
        console.log(a*b);
    }else if (verificadorM){
        console.log(b - a)
    }else if (verificadorN){
        console.log(a + b)
    }
}