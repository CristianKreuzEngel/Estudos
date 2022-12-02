maior=0
posicao=0
for cont in range(1,101,1):
    valor=int(input())
    if (valor>maior):
        maior=valor
        posicao=cont
print(maior)
print(posicao)