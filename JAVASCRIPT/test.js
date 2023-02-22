let input =require('fs').readFileSync('./dev/stdin/flie.txt', 'utf8')
let lines = input.split('\n')

let ans = 0;
let control = 0;

while(control == 0){
    let [h1,m1,h2,m2] = lines.shift().trim().split(" ").map(a => +a)
    if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
        control = 1;
        break;
    }
    if(h1<h2){
        if(m2>m1){
            a=h1*60+m1;
            b=h2*60+m2;
            console.log(b-a);
        }
        else{
            a=(h1*60)+m1;
            b=(h2*60)+m2;
            console.log(b-a);
        }
    }
    if(h1>h2){
        a=(24*60)-(h1*60+m1);
        b=(h2*60)+m2;
        console.log(a+b);
    }
    if(h1==h2){
        if(m2>m1){
            ans=m2-m1;
            console.log(ans);
        }
        else {
            a=(24*60)-(h1*60+m1);
            b=h2*60+m2;
            console.log(a+b);
        }
    }
}