let a=+lines.shift()
let b=+lines.shift()
let c=+lines.shift()
let d=+lines.shift()
let e=+lines.shift()
let positivo=(0)
let negativo=(0)
let par=(0)
let impar=(0)
if (a>0){
  positivo=positivo+1
}
if (((a%2)===0) || (a===0)){
  par=par+1
}
if (a<0){
  negativo=negativo+1
}
if ((a%2) !== 0){
    impar=impar+1
}

if (b>0){
  positivo=positivo+1
}
if (((b%2)===0) || (b===0)){
  par=par+1
}
if (b<0){
  negativo=negativo+1
}
if ((b%2) !== 0){
    impar=impar+1
}
if (c>0){
  positivo=positivo+1
}
if (((c%2)===0) || (c===0)){
  par=par+1
}
if (c<0){
  negativo=negativo+1
}
if ((c%2) !== 0){
    impar=impar+1
}
if (d>0){
  positivo=positivo+1
}
if (((d%2)===0) || (d===0)){
  par=par+1
}
if (d<0){
  negativo=negativo+1
}
if ((d%2) !== 0){
    impar=impar+1
}

if (e>0){
  positivo=positivo+1
}
if (((e%2)===0) || (e===0)){
  par=par+1
}
if (e<0){
  negativo=negativo+1
}
if ((e%2) !== 0){
    impar=impar+1
}
console.log(`${par} valor(es) par(es)`)
console.log(`${impar} valor(es) impar(es)`)
console.log(`${positivo} valor(es) positivo(s)`)
console.log(`${negativo} valor(es) negativo(s)`)