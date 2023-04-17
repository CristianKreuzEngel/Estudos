a,b,c=map(int, input().split(" "))

if a>b and c>=b:
  print(":)")
elif a<b and b>=c:
  print(":(")
elif a<b and ((b-a)>(c-b)):
  print(":(")
elif a<b and ((c-b)>=(b-a)):
  print(":)")
elif a>b and ((a-b)>(b-c)):
  print(":)")
elif a>b and ((a-b)<=(b-c)):
  print(":(")
elif a==b and b<c:
  print(":)")
elif a==b and b>c:
  print(":(")
elif a==b and a==c and b==c:
  print(":(")