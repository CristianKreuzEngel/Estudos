number=int(input())
for cont in range(0,number,1):
  a,b,c=map(float, input().split(" "))
  soma=(((a*2)+(b*3)+(c*5))/10)
  print("%0.1f"%soma)