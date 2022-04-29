import math
X1, Y1 = map(float, input().split(" "))
X2, Y2 = map(float, input().split(" "))
CALC = math.sqrt(pow((X2-X1),2)+pow((Y2-Y1),2))
print("{:.4f}".format(CALC))


