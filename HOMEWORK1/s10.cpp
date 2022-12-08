#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c;
	
	printf("please enter three different number!!!\n\n");
	
	printf("a=  ");
	scanf("%d",&a);
	printf("b=  ");
	scanf("%d",&b);
	printf("c=  "),
	scanf("%d",&c);
	
	if(a>b)
	{
		
		if(a>c)
		{
			printf("a is the biggest");
		}
	    if(c>a)
		{
			printf("c is the biggest");
	    }
	
	}
	else
	{
	    if(b>c)
	    {
	    	printf("b is the biggest");
		}
	    if(c>b)
		{ 
		    printf("c is the biggest");
		}
		
	}
	
	return 0;
}

