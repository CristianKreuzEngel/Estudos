let cont=0
let soma=0
let control=1
while(control!=0){
     let idade=+lines.shift()
     if (idade>0){
        soma=soma+idade
        cont=cont+1
     }
     else{
        control=0
     }     
}
let media=soma/cont
console.log(media.toFixed(2))