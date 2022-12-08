#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,sum=0,digit;
	
	printf("***Swap first digit and last digit in a number***\n\n");
	
	printf("Please enter a number:  ");
	scanf("%d",&n);
	
	while(n>0)
	{
		digit=n%10;
		sum=sum*10+digit;
		n=n/10;
	}
	printf("   %d",sum);
	
	
	return 0;
}

