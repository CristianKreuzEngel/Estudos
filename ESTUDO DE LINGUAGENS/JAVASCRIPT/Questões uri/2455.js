const pegarValoress = (line) => line.split(" ").map(a => +a)
const [a,b,c,d] = pegarValoress(lines.shift())

let soma=((a*b)-(c*d))

if (soma==0){
  console.log("0")
}
else if ((a*b)>(c*d)){
  console.log("-1")
}
else if((a*b)<(c*d)){
  console.log("1")
}