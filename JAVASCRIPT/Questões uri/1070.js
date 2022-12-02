let number=+lines.shift()
if ((number%2)!=0){
    for(let cont=number;cont<number+12;cont+=2){
        console.log(cont)
    }
} 
    else{
        for(let cont=number+1;cont<number+12;cont+=2){
            console.log(cont)
    }
 }
