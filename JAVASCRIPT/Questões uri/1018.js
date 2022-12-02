let qtd=+lines.shift()
let cem
let cin
let vint
let dez
let cinc
let dois
let uno

let cems
let cins
let vints
let dezs
let cincs
let doiss

cem=(Math.trunc(qtd/100))
cems=(qtd%100)
cin=(Math.trunc(cems/50))
cins=(cems%50)
vint=(Math.trunc(cins/20))
vints=(cins%20)
dez=(Math.trunc(vints/10))
dezs=(vints%10)
cinc=(Math.trunc(dezs/5))
cincs=(dezs%5)
dois=(Math.trunc(cincs/2))
doiss=(cincs%2)
uno=(Math.trunc(doiss/1))

console.log(qtd)
console.log(`${cem} nota(s) de R$ 100,00`)
console.log(`${cin} nota(s) de R$ 50,00`)
console.log(`${vint} nota(s) de R$ 20,00`)
console.log(`${dez} nota(s) de R$ 10,00`)
console.log(`${cinc} nota(s) de R$ 5,00`)
console.log(`${dois} nota(s) de R$ 2,00`)
console.log(`${uno} nota(s) de R$ 1,00`)