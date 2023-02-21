alfabeto = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
qtd = int(input())

for i in range (qtd):
    cod = input()
    cod = list(cod)
    desloc = int(input())
    aux = 0
    descod = []
    for c in range(len(cod)):
        for g in range(26):
            if cod[c] == alfabeto[g]:
                aux = g - desloc
                if aux < 0:
                    aux = 26 - (aux * (-1))
                letra = alfabeto[aux]
                descod.append(letra)
    print("".join(descod))