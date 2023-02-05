function fibonacci (num){
    let termo = +num
    let ultimo = 0
    let penultimo = 1

    for(let i = 1; i <= termo;i++){
        let atual = ultimo + penultimo
        console.log(atual)
        penultimo = ultimo
        ultimo = atual
    }
}
let a = lines.shift()
fibonacci(a)