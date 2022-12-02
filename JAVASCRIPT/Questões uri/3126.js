let caso=+lines.shift()
let cafe=lines.shift()
let lista=cafe.split(" ")
let contagem=0
const listaN=lista.map(str => {
    return Number(str);
})
for(let cont=0;cont<caso;cont++){
    if(listaN[cont]==1){
        contagem+=1
    }
}
console.log(contagem)