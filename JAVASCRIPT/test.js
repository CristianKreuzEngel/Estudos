let input =require('fs').readFileSync('./dev/stdin/flie.txt', 'utf8')
let lines = input.split('\n')

let control = 1;
while(control == 1){
    let[numOri, pessoas] = lines.shift().split(" ").map(a => +a)
    if(numOri == 0 && pessoas == 0){
        control == 0;
        break;
    }
    let people = lines.shift().split(" ").map(a => +a)
    let abacate = [...new Set(people)]
    if(numOri < pessoas){
        console.log(pessoas - numOri);
    }else{
        
    }
}