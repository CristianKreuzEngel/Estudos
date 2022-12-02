cont=0
soma=0
idade=1
while idade>0:
  idade=int(input())
  if idade>=0:
    soma=soma+idade
    cont=cont+1
media=float(soma/cont)
print("%0.2f"%media)  