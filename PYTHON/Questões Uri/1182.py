coluna = int(input())
tipo = input()
soma = 0
aux = 3
matriz = []

for i in range(aux):
    matriz.append([])

for c in range(aux):
    for g in range(aux):
        matriz[c].append(float(input()))
for c in range(aux):
    soma += matriz[c][coluna]

if tipo == "S":
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma/12))