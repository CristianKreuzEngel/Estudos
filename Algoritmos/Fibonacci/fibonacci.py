def fibbonaci(num):
    termo = int(num)
    ultimo = 0
    penultimo = 1

    for i in range(1, termo+1):
        atual = ultimo + penultimo
        print(f"{atual}")
        penultimo = ultimo
        ultimo = atual

a = int(input())
fibbonaci(a)