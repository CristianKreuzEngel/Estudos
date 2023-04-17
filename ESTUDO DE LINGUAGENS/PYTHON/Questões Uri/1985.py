qtd=int(input())
conta=float(0)
for cont in range(0,qtd,1):
  cod,quan=map(int, input().split(" "))
  if cod==1001:
    conta=conta+(quan*1.50)
  if cod==1002:
    conta=conta+(quan*2.50)
  if cod==1003:
    conta=conta+(quan*3.50)
  if cod==1004:
    conta=conta+(quan*4.50)
  if cod==1005:
    conta=conta+(quan*5.50)
print("%0.2f"%conta)