#include <stdio.h>
 
int main() {
 
	double A, B, C, x, y, z, p, q;
	
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	
	x = A*C/2;
	y = 3.14159*C*C;
	z = (A+B)*C/2;
	p = B*B;
	q = A*B;
	
	printf("TRIANGULO: %.3lf\n",x);
	printf("CIRCULO: %.3lf\n",y);
	printf("TRAPEZIO: %.3lf\n",z);
	printf("QUADRADO: %.3lf\n",p);
	printf("RETANGULO: %.3lf\n",q);
    return 0;
}
