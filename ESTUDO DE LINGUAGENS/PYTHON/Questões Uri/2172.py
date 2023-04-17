boo=1
xp=1
while boo!=0 and xp!=0:
  boo,xp=map(int, input().split(" "))
  soma=boo*xp
  if soma!=0:
    print(soma)