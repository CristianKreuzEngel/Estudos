casos=int(input())

for cont in range(0,casos,1):
  x,y=map(int, input().split(" "))
  rafa=(((3*x)**2)+(y**2))
  beto=((2*(x**2))+((5*y)**2))
  carlos=((-100*x)+(y**3))
  if rafa>beto and rafa>carlos:
    print("Rafael ganhou")
  if beto>rafa and beto>carlos:
    print("Beto ganhou")
  if carlos>rafa and carlos>beto:
    print("Carlos ganhou")