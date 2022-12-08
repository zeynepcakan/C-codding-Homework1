#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x,low,high,i;
	
	printf("***Print all numbers between LOW and HIGH that are divisible by number***\n\n");
	
	printf("Please enter a number:  ");
	scanf("%d",&x);
	
	printf("Please enter the HIGH value:  ");
	scanf("%d",&high);
	
	printf("Please enter the LOW value:   ");
	scanf("%d",&low);
	
	for(i=low;i<=high;i++)
	{
		if(i%x==0)
		{
			printf("  %d\n",i);
		}
		printf("\n");
	}
	
	return 0;
}
