numbe=+lines.shift()

horas=Math.trunc(((numbe/3600)))
min=Math.trunc((((numbe%3600)/60)))
seg=Math.trunc(((numbe-(horas*3600)-(min*60))))

console.log(`${horas}:${min}:${seg}`)