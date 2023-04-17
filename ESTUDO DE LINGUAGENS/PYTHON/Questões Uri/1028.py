def mdc(a,b):
  resto=None
  while resto!=0:
    resto=a % b
    a=b
    b=resto
  return a
cafe=int(input())
for cont in range(0,cafe,1):
  valor,valor1=map(int, input().split(" "))
  print(mdc(valor,valor1))