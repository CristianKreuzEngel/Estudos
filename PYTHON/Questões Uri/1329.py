controlador=1
while controlador!=0:
  caso=int(input())
  if caso==0:
    controlador=0
    break
  elif caso!=0:
    valor=input().split(" ")
    cara=0
    coroa=0
    lista=list(map(int, valor))
    for cont in range(0,caso,1):
      if lista[cont]==1:
        coroa+=1
      else:
        cara+=1
    print("Mary won {} times and John won {} times".format(cara, coroa))