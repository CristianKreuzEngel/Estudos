a,b,c,d=map(int, input().split(" "))
posição=[1,2,3,4]
lista=[a,b,c,d]

for x in range(0,4,1):
  if (lista[x]==1):
    print(posição[x])