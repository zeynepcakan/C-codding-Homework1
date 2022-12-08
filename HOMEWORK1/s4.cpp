#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,fp;
	
	printf("please enter a value=  \n");
	scanf("%d",&n);
	
	printf("please enter the freezing point=  \n");
	scanf("%d",&fp);
	
	if(n>fp)
	{
		printf(" above the freezing point");
	}
	else
	{
		printf("under the freezing point");
	}
	
	return 0;
}
