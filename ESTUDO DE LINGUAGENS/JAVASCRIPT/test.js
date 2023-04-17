let input =require('fs').readFileSync('./dev/stdin/flie.txt', 'utf8')
let lines = input.split('\n')
let [a,b,c,d,e] = lines.shift().split(" ").map(a => +a)
if (a <= b && a <= c && a <= d && a <= b){
    if(b<=c && b<= d && b<=e){
        if(c<= d && c<=e){
            if(d<= e){
                console.log("C");
            }
        }
    }
}else if (a  >= b && a  >= c && a  >= d && a  >= b){
    if(b >=c && b >= d && b >=e){
        if(c >= d && c >=e){
            if(d >= e){
                console.log("D");
            }
        }
    }
}else{
    console.log("N");
}