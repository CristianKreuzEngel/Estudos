let control = 1;
while(control == 1){
    let qtd = +lines.shift()
    if(qtd == 0){
        control = 0;
        break;
    }
    for(let i = 0; i < qtd; i++){
        let[a,b,c,d,e] = lines.shift().split(" ").map(a => +a)
        if(a >=0 && a <= 127 && b > 127 && c > 127 && d > 127 && e > 127){
            console.log('A')
        }else if(b >=0 && b <= 127 && a > 127 && c > 127 && d > 127 && e > 127){
            console.log('B')
        }else if(c >=0 && c <= 127 && b > 127 && a > 127 && d > 127 && e > 127){
            console.log('C')
        }else if(d >=0 && d <= 127 && b > 127 && c > 127 && a > 127 && e > 127){
            console.log('D')
        }else if(e >=0 && e <= 127 && b > 127 && c > 127 && d > 127 && a > 127){
            console.log('E')
        }else{
            console.log('*')
        }
    }
}
