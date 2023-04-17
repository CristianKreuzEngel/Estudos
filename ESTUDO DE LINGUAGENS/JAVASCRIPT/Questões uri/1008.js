let number = +lines.shift();
let horas = +lines.shift();
let valor= +lines.shift();

let salario = (horas*valor);

console.log(`NUMBER = ${number}`);

console.log(`SALARY = U$ ${salario.toFixed(2)}`);