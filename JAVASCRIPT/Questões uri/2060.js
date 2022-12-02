let mult2=0
let mult3=0
let mult4=0
let mult5=0

let number=+lines.shift()
let valores=lines.shift()

let lista=valores.split(" ")

const listaN=lista.map(str => {
    return Number(str);
});
for(cont=0;cont<number;cont++){
    if((listaN[cont]%2)==0){
        mult2+=1
    }
    if((listaN[cont]%3)==0){
        mult3+=1
    }
    if((listaN[cont]%4)==0){
        mult4+=1
    }
    if((listaN[cont]%5)==0){
        mult5+=1
    }
}
console.log(`${mult2} Multiplo(s) de 2`)
console.log(`${mult3} Multiplo(s) de 3`)
console.log(`${mult4} Multiplo(s) de 4`)
console.log(`${mult5} Multiplo(s) de 5`)