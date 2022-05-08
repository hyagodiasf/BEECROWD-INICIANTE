NOTA = int(input())

print(NOTA)
AUX = NOTA // 100
print("{} nota(s) de R$ 100,00".format(AUX))
NOTA = NOTA - (AUX * 100)

AUX = NOTA // 50
print("{} nota(s) de R$ 50,00".format(AUX))
NOTA = NOTA - (AUX * 50)

AUX = NOTA // 20
print("{} nota(s) de R$ 20,00".format(AUX))
NOTA = NOTA - (AUX * 20)

AUX = NOTA // 10
print("{} nota(s) de R$ 10,00".format(AUX))
NOTA = NOTA - (AUX * 10)

AUX = NOTA // 5
print("{} nota(s) de R$ 5,00".format(AUX))
NOTA = NOTA - (AUX * 5)

AUX = NOTA // 2
print("{} nota(s) de R$ 2,00".format(AUX))
NOTA = NOTA - (AUX * 2)

AUX = NOTA
print("{} nota(s) de R$ 1,00".format(AUX))



