#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i;
	printf("Even numbers between 1000 and 2000:\n\n");
	
	for(i=1000;i<=2000;i++)
	{
		if(i%2==0)
		{
			printf("  %d",i);
		}
    printf("\n");
	}
	
	return 0;
}

