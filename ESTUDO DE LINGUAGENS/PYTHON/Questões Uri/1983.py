qtd= int(input())
colocado=0
maiorNota=0
for x in range(0,qtd,1):
  matri,nota=map(float, input().split(" "))
  if (float(nota)>=8):
    if(float(nota)>maiorNota):
      maiorNota=nota
      colocado=matri

if maiorNota>=8:
  print("%0.0f"%colocado)  
else:
  print("Minimum note not reached")