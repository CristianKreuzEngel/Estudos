let input =require('fs').readFileSync('./dev/stdin/flie.txt', 'utf8')
let lines = input.split('\n')
let t = lines.shift()
let k = t.split(',')
for(let i = 0; i < 100; i++){
    console.log((`N[${i}] = ${k[0]}.${subString(k[1], 4)}`))
    t =t / 2
	k = t.split(',')
}