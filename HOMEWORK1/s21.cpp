#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,firstdigit,lastdigit;
	
	printf("Please enter a number:  ");
	scanf("%d",&n);
	
	lastdigit=n%10;
	printf("last digit is:   %d\n",lastdigit);
	
	while(n>=10)
	{
		n=n/10;
	}
	
	firstdigit=n;
	printf("first digit is:  %d",firstdigit);
	
	return 0;
}

