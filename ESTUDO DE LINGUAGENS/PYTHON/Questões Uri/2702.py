a,b,c=map(int, input().split(" "))
d,e,f=map(int, input().split(" "))
soma=0
soma1=0
soma2=0

if a<d:
  soma=d-a
if b<e:
  soma1=e-b
if c<f:
  soma2=f-c

calculo=(soma+soma1+soma2)
print(calculo)