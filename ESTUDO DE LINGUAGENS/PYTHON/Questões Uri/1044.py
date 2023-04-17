opa=input().split(" ")
a,b=opa

if (int(b)%int(a)==0) or (int(a)%int(b)==0):
  print("Sao Multiplos")
else:
  print("Nao sao Multiplos")