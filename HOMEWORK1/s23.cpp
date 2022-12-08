#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,rev=0,temp;
	printf("Please enter a number:  ");
	scanf("%d",&n);
	temp=n;
	
	
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+(temp%10);
		temp=temp/10;
	}
	
	if(rev==n)
	{
		printf("  %d is polindrome",n);
	}
	else
	{
	    printf("  %d is not polindrome",n);
	}

	return 0;
}
