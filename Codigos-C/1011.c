#include <stdio.h>
 
int main() {
 
	int R; 
	double pi = 3.14159, calc;
	
	scanf("%d",&R);
	
	calc = (4.0/3.0) * pi * pow(R,3);
	
	printf("VOLUME = %.3lf\n",calc);
 
    return 0;
}
