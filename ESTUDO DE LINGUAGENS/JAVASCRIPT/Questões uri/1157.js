let divisor=+lines.shift()
for (let cont=0; cont<divisor+1; cont++){
    if((divisor%cont)==0){
        console.log(cont)
    }
}