a=int(input())
b=int(input())
c=int(input())
d=int(input())
e=int(input())
positivo=int(0)
negativo=int(0)
par=int(0)
impar=int(0)
if a>0:
  positivo=positivo+1
if (a%2)==0 or a==0:
  par=par+1
if a<0:
  negativo=negativo+1
if (a%2)!= 0:
    impar=impar+1
if b>0:
  positivo=positivo+1
if (b%2)==0 or b==0:
  par=par+1
if b<0:
  negativo=negativo+1
if (b%2)!= 0:
    impar=impar+1
if c>0:
  positivo=positivo+1
if (c%2)==0 or c==0:
  par=par+1
if c<0:
  negativo=negativo+1
if (c%2)!= 0:
    impar=impar+1
if d>0:
  positivo=positivo+1
if (d%2)==0 or d==0:
  par=par+1
if d<0:
  negativo=negativo+1
if ((d%2)!= 0):
    impar=impar+1
if e>0:
  positivo=positivo+1
if (e%2)==0 or e==0:
  par=par+1
if e<0:
  negativo=negativo+1
if (e%2)!= 0:
    impar=impar+1
print(par,"valor(es) par(es)")
print(impar,"valor(es) impar(es)")
print(positivo,"valor(es) positivo(s)")
print(negativo,"valor(es) negativo(s)")