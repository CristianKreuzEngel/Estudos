qtd=int(input())
dentro=0
fora= 0

for x in range(0,qtd,1):
  x=int(input())
  if (x>=10 and x<=20):
    dentro=dentro+1
  else:
    fora=fora+1


print(dentro,"in")
print(fora,"out")