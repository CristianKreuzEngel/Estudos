let km = +lines.shift()
let litr = +lines.shift()
let consumo=(km/litr)

console.log(`${consumo.toFixed(3)} km/l`)