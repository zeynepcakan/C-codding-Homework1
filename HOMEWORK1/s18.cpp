#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
   int a[10],n,i;  
  
    system ("cls");  

    printf("Enter the number to convert: ");    
    scanf("%d",&n);  
  
    for(i=0;n>0;i++)    
    {    
        a[i]=n%2;    
        n=n/2;    
    }  
  
    printf("\nBinary of Given Number is=");  
  
    for(i=i-1;i>=0;i--)    
    {    
     printf("%d",a[i]);    
    }    
    
    return 0;  
} 
	

