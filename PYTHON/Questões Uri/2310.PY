number=int(input())
contS=0
contB=0
contA=0
contSb=0
contBb=0
contAb=0
for cont in range(0,number,1):
  nome=input()
  saque,bloqueio,ataque=map(int, input().split(" "))
  saqueB,bloqueioB,ataqueB=map(int, input().split(" "))
  contS+=saque
  contB+=bloqueio
  contA+=ataque
  contSb+=saqueB
  contBb+=bloqueioB
  contAb+=ataqueB

calcS=((contSb/contS)*100)
calcB=((contBb/contB)*100)
calcA=((contAb/contA)*100)
print("Pontos de Saque: %0.2f"%calcS,"%.")
print("Pontos de Bloqueio: %0.2f"%calcB,"%.")
print("Pontos de Ataque: %0.2f"%calcA,"%.")