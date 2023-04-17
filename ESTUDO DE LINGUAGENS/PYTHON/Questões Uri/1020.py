num=(int(input()))

horas=int((num/365))
minu=int(((num%365)/30))
seg=int((num-(horas*365)-(minu*30)))


print(horas,"ano(s)")
print(minu,"mes(es)")
print(seg,"dia(s)")