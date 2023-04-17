const pegarValoress = (line) => line.split(" ").map(a => +a)
const [x,y] = pegarValoress(lines.shift())

if (x===0 && y!==0){
  console.log("Eixo Y")
}else if (y===0 && x!==0){
  console.log("Eixo X")
}else if (x>0 && y>0){
  console.log("Q1")
}else if (x<0 && y>0){
  console.log("Q2")
}else if (x<0 && y<0){
  console.log("Q3")
}else if (x>0 && y<0){
  console.log("Q4")
}else if (x===0 && y===0){
  console.log("Origem")
}