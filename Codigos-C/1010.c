#include <stdio.h>
 
int main() {
 
	int cod_p1, num_p1, cod_p2, num_p2;
	float valor_p1, valor_p2, total;
	
	scanf("%d %d %f",&cod_p1,&num_p1,&valor_p1);
	scanf("%d %d %f",&cod_p2,&num_p2,&valor_p2);
		
	total = (num_p1 * valor_p1) + (num_p2 * valor_p2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}
