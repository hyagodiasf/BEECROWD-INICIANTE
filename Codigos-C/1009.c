#include <stdio.h>
 
int main() {
 
	char nome[50];
	double salario_fixo, total_vendas, total;
	
	scanf("%s",&nome);
	
	scanf("%lf%lf",&salario_fixo, &total_vendas);
	
	total = salario_fixo + total_vendas * 0.15;
	
	
	printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
