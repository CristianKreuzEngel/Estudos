let soma=0
let controle=1
while(controle!=0){
    let x=+lines.shift()
    if(x==0){
        controle=0
        break
    }
    for(let i=x;i<x+10;i++){
        if((i%2)==0){
            soma+=i
        }
    }
    console.log(soma)
    soma=0
}