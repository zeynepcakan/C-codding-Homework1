#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int A,B,result;
	
	printf("*****Find the HCF between two number*****\n\n");
	
	printf("Please enter the first number:  ");
	scanf("%d",&A);
	
	printf("please enter the second number:  ");
	scanf("%d",&B);
	
	while(A!=B)
	{
		if(A>B)
		{
			A=A-B;
			result=A;
		}
		else
		{
			B=B-A;
			result=B;
		}
	}
	printf("HCF=  %d",result);
	
	return 0;
}
