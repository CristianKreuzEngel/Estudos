const money=(line)=>line.split(" ").map(a => +a)
let qtd=+lines.shift()
for(let cont=-0;cont<qtd;cont++){
    let[a,b,c]=money(lines.shift())
    let media=(((a*2)+(b*3)+(c*5))/10)
    console.log(media.toFixed(1))
}