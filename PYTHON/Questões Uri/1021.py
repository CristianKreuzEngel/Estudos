import math
num=(float(input()))

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

arrendo=two*100

niquel=math.floor(arrendo/100)
niquels=(arrendo-niquel*100)

moed=math.floor(niquels/50)
moeds=(niquels-moed*50)

cent=math.floor(moeds/25)
cents=(moeds-cent*25)

ten=math.floor(cents/10)
tens= (cents-ten*10)
fnaf=math.floor(tens/5)
fnafs=(tens-fnaf*5)

uno=math.floor(fnafs/1)

print("NOTAS:")
print(cem,"nota(s) de R$ 100.00")
print(cin,"nota(s) de R$ 50.00")
print(vint,"nota(s) de R$ 20.00")
print(deze,"nota(s) de R$ 10.00")
print(cinc,"nota(s) de R$ 5.00")
print(dois,"nota(s) de R$ 2.00")
print("MOEDAS:")
print(niquel,"moeda(s) de R$ 1.00")
print(moed,"moeda(s) de R$ 0.50")
print(cent,"moeda(s) de R$ 0.25")
print(ten,"moeda(s) de R$ 0.10")
print(fnaf,"moeda(s) de R$ 0.05")
print(uno,"moeda(s) de R$ 0.01")