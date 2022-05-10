#include <stdio.h>
 
int main() {
 
	int gasto_horas, velo_medi; 
    float calc;
	
	scanf("%d%d", &gasto_horas, &velo_medi);
	
	calc = (gasto_horas * velo_medi) / 12.00 ;
	
	printf("%.3f\n",calc);
 
    return 0;
}
