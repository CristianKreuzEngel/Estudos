let x=+lines.shift()
let y=+lines.shift()
let minimo=0
let maximo=0
if(x>y){
    maximo=x
    minimo=y
}else{
    maximo=y
    minimo=x
}
for (cont=minimo+1;cont<maximo;cont++){
    if((cont%5)==2 || (cont%5)==3){
        console.log(cont)
    }
}