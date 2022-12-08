#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,i;
	float sum=0;
	
	printf("Please enter a number:  ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		for(i=2;i<=n;i+=2)
	    {
		    sum=sum + ((float)1/(float)i);
	    }	
	}
	else
	{
		printf("Please enter an even number! ");
	}
	
	printf("Sum=  %f",sum);
		
	
	return 0;
}

