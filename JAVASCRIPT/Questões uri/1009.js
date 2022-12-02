let name = lines.shift();
let salario = +lines.shift();
let vendas = +lines.shift();

let soma= ((vendas*0.15)+salario);

console.log(`TOTAL = R$ ${soma.toFixed(2)}`);