#include <stdio.h>
 
int main() {
 
  int A,B,S;
  
  scanf("%d%d%d",&A,&B,&S);
  
  if(A > B && A > S) 
  	printf("%d eh o maior\n",A);
  else if(B > S && B > A)
    printf("%d eh o maior\n",B);	
  else if(S > A && S > B)
    printf("%d eh o maior\n",S);
    return 0;
}
