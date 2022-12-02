const lista=(line)=>line.split(" ").map(a => +a)
let qtd=+lines.shift()
for(let cont=0; cont<qtd; cont++){
    let[x,y]=lista(lines.shift())
    let  rafa=(((3*x)**2)+y**2)
    let beto=(2*(x**2)+((5*y)**2))
    let carlo=((-100*x)+(y**3))
    if (rafa>beto && rafa>carlo){
        console.log("Rafael ganhou")
    }
    else if(beto>rafa && beto>carlo){
        console.log("Beto ganhou")
    }
    else if(carlo>rafa && carlo>beto){
        console.log("Carlos ganhou")
    }
}