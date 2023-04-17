import math
num=(int(input()))

cem=math.floor((num/100))
cems=(num-cem*100)

cin=math.floor(cems/50)
cins=(cems-cin*50)

vint=math.floor(cins/20)
vints=(cins-vint*20)

deze=math.floor(vints/10)
dezs=(vints-deze*10)

cinc=math.floor(dezs/5)
cincs=(dezs-cinc*5)

dois=math.floor(cincs/2)
two=(cincs-dois*2)

uno=math.floor(two/1)

print(num)
print(cem,"nota(s) de R$ 100,00")
print(cin,"nota(s) de R$ 50,00")
print(vint,"nota(s) de R$ 20,00")
print(deze,"nota(s) de R$ 10,00")
print(cinc,"nota(s) de R$ 5,00")
print(dois,"nota(s) de R$ 2,00")
print(uno,"nota(s) de R$ 1,00")