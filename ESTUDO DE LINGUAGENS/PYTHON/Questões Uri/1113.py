x=int(0)
y=int(1)
while x!=y:
  x,y=map(int, input().split(" "))

  if x>y:
    print("Decrescente")
  elif x<y:
    print("Crescente")