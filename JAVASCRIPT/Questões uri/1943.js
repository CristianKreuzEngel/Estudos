let number=+lines.shift()

if (number==1){
  console.log("Top 1")
}
else if (number>=2 && number<=3){
  console.log("Top 3")
}
else if (number>=4 && number<=5){
  console.log("Top 5")
}
else if (number>=6 && number<=10){
  console.log("Top 10")
}
else if (number>=11 && number<=25){
  console.log("Top 25")
}
else if (number>=26 && number<=50){
  console.log("Top 50")
}
else if(number>=51 && number<=100){
  console.log("Top 100")
}
