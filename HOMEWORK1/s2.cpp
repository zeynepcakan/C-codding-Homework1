#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int r;
	float area, pi=3.14;
	printf("Please enter the radius=  ");
	scanf("%d",&r);
	area=pi*r*r;
	printf("Area=  %f",area);
	
	return 0;
}
