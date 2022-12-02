num=(int(input()))

horas=int((num/3600))
minu=int(((num%3600)/60))
seg=int((num-(horas*3600)-(minu*60)))


print('{}:{}:{}'.format(horas,minu,seg))