#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
  int i,n,sum=0;

	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
        printf("Number-%d : ",i);

		scanf("%d",&n);
		sum=sum+n;
	}
    printf("Sum= %d",sum);
    
    return 0;
 
}



