const pegarValoress = (line) => line.split(" ").map(a => +a)
const [a,b,c] = pegarValoress(lines.shift())


if (((a+b)<=c) || ((b+c)<=a) || ((a+c)<=b) || ((a+b)<=0)){
    let area=(((a+b)*c)/2)
    console.log(`Area = ${area.toFixed(1)}`)
}else if (((a+b)>c) || ((b+c)>a) || ((a+c)>b)){
    let perimetro=(a+b+c)
    console.log(`Perimetro = ${perimetro.toFixed(1)}`)
}