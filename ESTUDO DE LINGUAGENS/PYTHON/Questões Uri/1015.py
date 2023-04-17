import math

lenha=input().split(" ")
x1, y1= lenha

linha=input().split(" ")
x2, y2= linha

dist= math.sqrt((((float(x2) - float(x1))*(float(x2) - float(x1))) + ((float(y2)-float(y1)) *(float(y2)-float(y1)))))
print("%0.4f"%dist)