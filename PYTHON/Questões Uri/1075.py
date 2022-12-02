number=int(input())
for cont in range(1,10000,1):
  soma=cont%number
  if soma==2:
    print(cont)