control = 1
while control == 1:
    qtd = int(input())
    if qtd == 0:
        control = 0
        break
    for i in range(qtd):
        a,b,c,d,e=map(int, input().split(" "))
        if(a >=0 and a <= 127 and b > 127 and c > 127 and d > 127 and e > 127):
            print('A')
        elif(b >=0 and b <= 127 and a > 127 and c > 127 and d > 127 and e > 127):
            print('B')
        elif(c >=0 and c <= 127 and b > 127 and a > 127 and d > 127 and e > 127):
            print('C')
        elif(d >=0 and d <= 127 and b > 127 and c > 127 and a > 127 and e > 127):
            print('D')
        elif(e >=0 and e <= 127 and b > 127 and c > 127 and d > 127 and a > 127):
            print('E')
        else:
            print('*')