#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,n;
	
	printf("All natural number between n to 1\n");
	printf("Please enter a final value(n)=  ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("  %d\n",i);
	}
	
	return 0;
}

