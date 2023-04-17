caso=int(input())
valor=input().split(" ")
conta=0
lista=list(map(int, valor))
for cont in range(0,caso,1):
  if lista[cont]==1:
    conta+=1
print(conta)