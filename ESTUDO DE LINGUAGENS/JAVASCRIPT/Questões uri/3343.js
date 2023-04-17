const pegarValores = (line) => line.split(" ").map(a => +a)

const [qtde, mtMuralha] = pegarValores(lines.shift())
const gigantes = lines.shift().split('')
const [p, m, g] = pegarValores(lines.shift())


muralhas = pegarValores((mtMuralha.toFixed(0) + ' ').repeat(qtde))
let [tp, tm, tg] = [0, 0, 0]

gigantes.map(a => {
    if (a == 'P') {
        while (muralhas[tp] < p)
            tp += 1
        muralhas[tp] -= p
    } 
    else if (a == 'M') {
        while (muralhas[tm] < m)
            tm += 1
        muralhas[tm] -= m 
    } else  {
        while (muralhas[tg] < g)
            tg += 1
        muralhas[tg] -= g
    }
})
console.log(Math.max(tp, tm, tg)+1)