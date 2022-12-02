numbe=+lines.shift()

horas=Math.trunc(((numbe/365)))
min=Math.trunc((((numbe%365)/30)))
seg=Math.trunc(((numbe-(horas*365)-(min*30))))

console.log(`${horas} ano(s)`)
console.log(`${min} mes(es)`)
console.log(`${seg} dia(s)`)
