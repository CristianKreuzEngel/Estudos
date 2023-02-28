let input =require('fs').readFileSync('./dev/stdin/flie.txt', 'utf8')
let lines = input.split('\n')


let name = lines.shift();
let [dd,mm,yy] = lines.shift().split("/").map(a => +a);
let [d,m,y] = lines.shift().split("/").map(a => +a);

let calcIdade = yy - y;
console.log(name)
if (dd == d && mm == m){
console.log(`Feliz aniversario!\nVoce tem ${calcIdade} anos ${name.re}`);
}else{
    console.log(`Voce tem ${calcIdade-1} anos ${name}${ponto}`);
}