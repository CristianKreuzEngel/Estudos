ranGe = int(input())

velocidadeMax = 0
velocidadeAtual = 0
posicao = 0
linha = input().split(" ")
for x in range (0, ranGe):
    velocidadeAtual = int(linha[x])
    if velocidadeAtual > velocidadeMax:
        velocidadeMax = velocidadeAtual
    elif velocidadeAtual < velocidadeMax and posicao == 0:
        posicao = x + 1
print((posicao))