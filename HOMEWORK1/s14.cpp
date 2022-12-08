#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,factor=1,i;
	
	printf("Please enter the to be factored in:  ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		factor=factor*i;
	}
	
	printf(" %d ! = %d",n,factor);
	
	return 0;
}

