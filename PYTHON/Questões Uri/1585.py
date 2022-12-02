import math
casos=int(input())
for cont in range(0,casos,1):
  x,y=map(int, input().split(" "))
  area=(x*y)/2
  print(math.floor(area),"cm2")