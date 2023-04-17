comp, qtd, folhas=map(int, input().split(" "))

soma=((qtd/folhas)/comp)
if soma>=1:
  print("S")
else:
  print("N")