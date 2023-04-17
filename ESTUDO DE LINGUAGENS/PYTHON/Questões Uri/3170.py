bolinha=(int(input()))
galhos=(int(input()))

soma=int(((galhos/2)-bolinha))

if soma<=int(0) or soma==bolinha:
  print("Amelia tem todas bolinhas!")
else:
  print("Faltam",soma,"bolinha(s)")