
let calcX = 0;
let calcY = 0;
let control = 1;


while(control == 1){

    let [x1,y1,x2,y2] = lines.shift().split(" ").map(a => +a);


    if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0){
        control = 0;
        break;

    }else{
        x1 < x2 ? calcX = x2 - x1 : calcX = x1 - x2;
        y1 < y2 ? calcY = y2 - y1 : calcY = y1 - y2;


        if (x1 == x2 && y1 == y2){
            console.log("0");
        }else if( calcX == calcY || x1 == x2 && y1 != y2 || x1 != x2 && y1 == y2){
            console.log("1");
        }else{
            console.log("2");
        }
    }

}