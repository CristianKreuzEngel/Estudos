let qtd = +lines.shift()
for(let g = 0; g < qtd; g++){
    let alfabeto = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
    let aux = 0
    let cod = lines.shift().split('')
    let desloc = +lines.shift();
    let test = cod.some(a => a == "\r")
    let descod = []
    if (test){
        for(let i = 0; i < cod.length-1; i++){
            for(let j =0; j < 26; j++){
                if(cod[i] == alfabeto[j]){
                    aux = j - desloc
                    if (aux < 0){
                        aux = 26 - (aux * (-1))
                    }
                    descod[i] = alfabeto[aux]
                }
            }
        }
        console.log(descod.join(""))
    }else{
        for(let i = 0; i < cod.length; i++){
            for(let j =0; j < 26; j++){
                if(cod[i] == alfabeto[j]){
                    aux = j - desloc
                    if (aux < 0){
                        aux = 26 - (aux * (-1))
                    }
                    descod[i] = alfabeto[aux]
                }
            }
        }
        console.log(descod.join("")) 
    }
}