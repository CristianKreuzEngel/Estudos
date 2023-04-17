let qtde=+lines.shift()
for (let cont = 0; cont < qtde; cont++){
     let valor = +lines.shift()
     let soma=(valor%2)

        if (valor==0){
        console.log("NULL")
    }
        else if (soma==0 && valor>0){
        console.log("EVEN POSITIVE")
    }
        else if (soma==0 && valor<0){
        console.log("EVEN NEGATIVE")
    }
        else if (soma!=0 && valor>0){
        console.log("ODD POSITIVE")
    }
        else if (soma!=0 && valor<0){
        console.log("ODD NEGATIVE")
    }
 }