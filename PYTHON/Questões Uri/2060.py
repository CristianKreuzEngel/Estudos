numero=int(input())
listaS=input().split(" ")
listaN=list(map(int, listaS))
dois=0
tres=0
quatro=0
cinco=0
for cont in range(0,numero,1):
  if (listaN[cont] % 2)==0:
    dois+=1
  if (listaN[cont] % 3)==0:
    tres+=1
  if (listaN[cont] % 4)==0:
    quatro+=1
  if (listaN[cont] % 5)==0:
    cinco+=1
print("{} Multiplo(s) de 2".format(dois))
print("{} Multiplo(s) de 3".format(tres))
print("{} Multiplo(s) de 4".format(quatro))
print("{} Multiplo(s) de 5".format(cinco))