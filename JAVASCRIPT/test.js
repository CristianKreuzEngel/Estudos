let input =require('fs').readFileSync('./dev/stdin/flie.txt', 'utf8')
let lines = input.split('\n')

let control = 1;
while(control != 0){
    let [ing, people] = lines.shift().split(" ").map(a => +a)
    if (ing == 0 && people == 0){
        control = 0;
        break;
    }
    let pessoas = lines.shift().split(" ").map(a => +a)
    let verdadeiros = [...new Set(pessoas)];

    
    if(ing < people){
        console.log(people - ing)
    }else if(verdadeiros.length == 1 && pessoas.length > 1){
        console.log(verdadeiros.length);
    }else{
        let soma = 0;
        for(let i = 0; i < verdadeiros.length; i++){
            for (let j = 0; j < people; j++){
                if(verdadeiros[i] == pessoas[j]){
                    soma += 1;
                }
            }
        }
        console.log(soma - verdadeiros.length)
    }
}