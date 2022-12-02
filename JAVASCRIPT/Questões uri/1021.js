let qtd=+lines.shift()
let cem
let cin
let vint
let dez
let cinc
let dois


let cems
let cins
let vints
let dezs
let cincs
let doiss

let une
let cruz
let vici
let dezi
let ciqui
let uny

let arrendonda
let unes
let cruzs
let vicis
let dezis
let ciquis



cem=(Math.trunc(qtd/100))
cems=(qtd-cem*100)
cin=(Math.trunc(cems/50))
cins=(cems-cin*50)
vint=(Math.trunc(cins/20))
vints=(cins-vint*20)
dez=(Math.trunc(vints/10))
dezs=(vints-dez*10)
cinc=(Math.trunc(dezs/5))
cincs=(dezs-cinc*5)
dois=(Math.trunc(cincs/2))
doiss=(cincs-dois*2)

arrendonda=(doiss*100)

une=Math.floor(arrendonda/100)
unes=(arrendonda-une*100)
cruz=Math.floor(unes/50)
cruzs=(unes-cruz*50)
vici=Math.floor(cruzs/25)
vicis=(cruzs-vici*25)
dezi=Math.floor(vicis/10)
dezis=(vicis-dezi*10)
ciqui=Math.floor(dezis/5)
ciquis=(dezis-ciqui*5)
uny=Math.round(ciquis/1)

console.log("NOTAS:")
console.log(`${cem} nota(s) de R$ 100.00`)
console.log(`${cin} nota(s) de R$ 50.00`)
console.log(`${vint} nota(s) de R$ 20.00`)
console.log(`${dez} nota(s) de R$ 10.00`)
console.log(`${cinc} nota(s) de R$ 5.00`)
console.log(`${dois} nota(s) de R$ 2.00`)
console.log("MOEDAS:")
console.log(`${une} moeda(s) de R$ 1.00`)
console.log(`${cruz} moeda(s) de R$ 0.50`)
console.log(`${vici} moeda(s) de R$ 0.25`)
console.log(`${dezi} moeda(s) de R$ 0.10`)
console.log(`${ciqui} moeda(s) de R$ 0.05`)
console.log(`${uny} moeda(s) de R$ 0.01`)