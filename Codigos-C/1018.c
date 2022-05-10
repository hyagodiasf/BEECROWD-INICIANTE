# include <stdio.h>

int main(){
	int A,calc;
	
	scanf("%d",&A);
	
	printf("%d\n",A);
	
	calc = A / 100;
	printf("%d nota(s) de R$ 100,00\n",calc);
	A = A - calc * 100;
	
	calc = A / 50;
	printf("%d nota(s) de R$ 50,00\n",calc);
	A = A - calc * 50;
	
	calc = A / 20;
	printf("%d nota(s) de R$ 20,00\n",calc);
	A = A - calc * 20;
	
	calc = A / 10;
	printf("%d nota(s) de R$ 10,00\n",calc);
	A = A - calc * 10;
	
	calc = A / 5;
	printf("%d nota(s) de R$ 5,00\n",calc);
	A = A - calc * 5;
	
	calc = A / 2;
	printf("%d nota(s) de R$ 2,00\n",calc);
	A = A - calc * 2;
	
	calc = A;
	printf("%d nota(s) de R$ 1,00\n",calc);
	
	return 0;
}

