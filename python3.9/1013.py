import math
VALORES = input().split(" ")
A, B, C = [int(X) for X in VALORES]
CALC1 = (A+B+abs(A-B))/2
CALC2 = int((CALC1+C+abs(CALC1-C))/2)
print("{} eh o maior".format(CALC2))




