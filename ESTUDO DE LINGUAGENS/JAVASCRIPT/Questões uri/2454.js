const linha=(line)=> line.split(" ").map(a=> +a)
let [p,r]=linha(lines.shift())
if(p==0 && r==0 || p==0 && r==1){
    console.log("C")
}
else if(p==1 && r==0){
    console.log("B")
}
else if(p==1 && r==1){
    console.log("A")
}