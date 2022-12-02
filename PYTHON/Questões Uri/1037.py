valor=(float(input()))

if valor >= 0 and valor <= 25:
  print("Intervalo [0,25]")

if valor>= 25.01 and valor <= 50:
  print("Intervalo (25,50]")

if valor>= 50.01 and valor <=75:
  print("Intervalo (50,75]")

if valor>= 75.01 and valor <=100:
  print("Intervalo (75,100]")

if valor > 100 or valor < 0:
  print("Fora de intervalo")
