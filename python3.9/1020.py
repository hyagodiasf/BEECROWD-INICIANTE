IDADE = int(input())
AUX = (IDADE // 365)
print("{} ano(s)".format(AUX))
IDADE = IDADE % 365

AUX = (IDADE // 30)
print("{} mes(es)".format(AUX))
IDADE = IDADE % 30

print("{} dia(s)".format(IDADE))


