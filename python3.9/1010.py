LIST1 = input().split(" ")
LIST2 = input().split(" ")
COD_P1, NUMERO_P1, VALOR_P1 = LIST1
COD_P2, NUMERO_P2, VALOR_P2 = LIST2

CALC = (int(NUMERO_P1) * float(VALOR_P1)) + (int(NUMERO_P2) * float(VALOR_P2))

print("VALOR A PAGAR: R$ {:.2f}".format(CALC))
