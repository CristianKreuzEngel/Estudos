nota= input().split(" ")
a, b, c = nota

triangulo=((float(a) * float(c)/2))
roda = (float(c)* float(c))*(3.14159)
trap=(((float(a) +float(b)) *float(c))/2)
mine=(float(b) * float(b))
retan=(float(a) *float(b))

print("TRIANGULO: %0.3f"%triangulo)
print("CIRCULO: %0.3f"%roda)
print("TRAPEZIO: %0.3f"%trap)
print("QUADRADO: %0.3f"%mine)
print("RETANGULO: %0.3f"%retan)