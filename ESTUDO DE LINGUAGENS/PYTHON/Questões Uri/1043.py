a,b,c=map(float, input().split(" "))

if (a+b)<=c or (b+c)<=a or (a+c)<=b or (a+b)<=0:
  area=(((a+b)*c)/2)
  print("Area = %0.1f"%area)

elif (a+b)>c or (b+c)>a or (a+c)>b:
  perimetro=(a+b+c)
  print("Perimetro = %0.1f"%perimetro)


