abas,acao=map(int, input().split(" "))
for cont in range(0,acao,1):
  texto=input()
  if texto=="fechou":
    abas+=1
  elif texto=="clicou":
    abas-=1
print(abas)