p,r=map(int, input().split(" "))
if(p==0 and r==0 or p==0 and r==1):
    print("C")
elif(p==1 and r==0):
    print("B")
elif(p==1 and r==1):
    print("A")