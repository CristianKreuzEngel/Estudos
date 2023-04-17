nota= input().split(" ")
cod, qtd, valor = nota
nota= input().split(" ")
cod1, qtd1, valor1 = nota

soma=((int(qtd) * float(valor))+(int(qtd1) * float(valor1)))
print("VALOR A PAGAR: R$ %0.2f"%soma)