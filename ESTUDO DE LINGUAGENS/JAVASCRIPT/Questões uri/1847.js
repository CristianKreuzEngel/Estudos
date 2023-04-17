const pegarValoress = (line) => line.split(" ").map(a => +a)
const [a,b,c] = pegarValoress(lines.shift())
if (a>b && c>=b){
  console.log(":)")
}
else if (a<b && b>=c){
  console.log(":(")
}
else if (a<b && ((b-a)>(c-b))){
  console.log(":(")
}
else if (a<b && ((c-b)>=(b-a))){
  console.log(":)")
}
else if (a>b && ((a-b)>(b-c))){
  console.log(":)")
}
else if (a>b && ((a-b)<=(b-c))){
  console.log(":(")
}
else if (a==b && b<c){
  console.log(":)")
}
else if (a==b && b>c){
  console.log(":(")
}
else if (a==b && a==c && b==c){
  console.log(":(")
}
