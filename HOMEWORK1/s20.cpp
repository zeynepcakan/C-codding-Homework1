#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,c=0,remainder;
	
	printf("Please enter a number:  ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder=n%10;
		n=(n-remainder)/10;
		c++;
		
	}
	printf("  %d",c);
	
	return 0;
}

