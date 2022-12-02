num=input().split(" ")
a=int(num[0])
ultimoValor=len(num)-1
n=int(num[ultimoValor])
soma=0
for cont in range(0,n,1):
  soma+= a + cont
print(soma)