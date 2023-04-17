let number=+lines.shift()
for(let cont=-0;cont<10000;cont++){
    let soma=cont % number
    if (soma==2){
        console.log(cont)
    }
}