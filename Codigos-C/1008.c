#include <stdio.h>
 
int main() {
 
	int numero,quant_horas;
	float salario,resul;
	
	scanf("%d%d",&numero,&quant_horas);
	
	scanf("%f",&salario);
	
	resul = salario * quant_horas;
	
	printf("NUMBER = %d\n",numero);
	
	printf("SALARY = U$ %.2f\n",resul);
 
    return 0;
}
