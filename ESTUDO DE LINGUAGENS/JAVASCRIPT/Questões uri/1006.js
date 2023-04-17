let a = +lines.shift();
let b = +lines.shift();
let c = +lines.shift();
let media = (((a*2)+(b*3)+(c*5))/10);

console.log(`MEDIA = ${media.toFixed(1)}`);