#include <stdio.h>
 
int main() {
 
	int X;
	float Y, result;
	
	scanf("%d",&X);
	scanf("%f",&Y);
	
	result = X / Y ;
	
	printf("%.3f km/l\n",result);
	
    return 0;
}
