valores = input().split(" ")
A, B, C = [float(val) for val in valores]
TRIAN = (A * C)/2
CIRC = 3.14159 * pow(C,2)
TRAP = ((A+B)*C)/2
QUAD = B*B
RETANG = A*B
print("TRIANGULO: {:.3f}".format(TRIAN))
print("CIRCULO: {:.3f}".format(CIRC))
print("TRAPEZIO: {:.3f}".format(TRAP))
print("QUADRADO: {:.3f}".format(QUAD))
print("RETANGULO: {:.3f}".format(RETANG))
