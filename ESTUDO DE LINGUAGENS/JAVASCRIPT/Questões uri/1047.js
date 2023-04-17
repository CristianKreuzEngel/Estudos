let lenha = (line) => line.split(" ").map(a => +a)
let [h1,m1,h2,m2] = lenha(lines.shift())

let minu=0
let hora=0

if (h1<h2){
    hora=(h2-h1)
    if (m1<m2){
        minu=m2-m1
    }
    if (m1>m2){
        hora=hora-1
        minu=((60-m1)+m2)
    }
    if (m1===m2){
        minu=0
    }
}
if (h1>h2){
    hora=h2+(24-h1)
    if (m1<m2){
        minu=m2-m1
    }
    if (m1>m2){
        hora=hora-1
        minu=((60-m1)+m2)
    }
    if (m1===m2){
        minu=0
    }
}
if (h1===h2){
    if (m1<m2){
        hora=0
        minu=m2-m1
    }
    if (m1>m2){
        hora=23
        minu=((60-m1)+m2)
    }
    if (m1===m2){
        hora= 24
        minu=0
    }
}

console.log(`O JOGO DUROU ${hora} HORA(S) E ${minu} MINUTO(S)`)