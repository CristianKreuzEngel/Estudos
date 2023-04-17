const linha=(line)=>line.split(" ").map(a=> +a)
let caso=+lines.shift()
for(let i=0; i<caso;i++){
    let [a,b]=linha(lines.shift())
    let area=(a*b)/2
    console.log(`${Math.floor(area)} cm2`)
}