a,b,c,d=map(int, input().split(" "))

soma=((a*b)-(c*d))

if (soma==0):
  print("0")
elif ((a*b)>(c*d)):
  print("-1")
elif((a*b)<(c*d)):
  print("1")