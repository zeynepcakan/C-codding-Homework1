#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,j,c;
	printf("*****Multiplication Table of any number*****\n\n");
	printf("Please enter a number:  ");
	scanf("%d",&n);
	
	for(j=1;j<=10;j++)
	{
		c=n*j;
		printf("  %d\n",c);
		
	}
	
	return 0;
}


