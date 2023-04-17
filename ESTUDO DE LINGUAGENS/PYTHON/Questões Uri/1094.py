qtd=int(input())
coelho=0
frog=0
mouse=0
casos=0
for cont in range(0,qtd,1):
  quantia,tipo=input().split(" ")
  quantia=int(quantia)
  casos=casos+quantia
  if tipo=="C":
    coelho=coelho+quantia
  if tipo=="S":
    frog=frog+quantia
  if tipo=="R":
    mouse=mouse+quantia

calculoC=((coelho/casos)*100)
calculoS=((frog/casos)*100)
calculoR=((mouse/casos)*100)
print("Total: {} cobaias".format(casos))
print("Total de coelhos: {}".format(coelho))
print("Total de ratos: {}".format(mouse))
print("Total de sapos: {}".format(frog))
print("Percentual de coelhos: %0.2f"%calculoC,"%")
print("Percentual de ratos: %0.2f"%calculoR,"%")
print("Percentual de sapos: %0.2f"%calculoS,"%")