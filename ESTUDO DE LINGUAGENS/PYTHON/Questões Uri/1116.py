qtd=int(input())
for x in range(0,qtd,1):
  valorX,valorY=map(int, input().split(" "))
  if valorY==0:
    print("divisao impossivel")
  elif (valorY!=0):
    soma=valorX/valorY
    print(soma)