#include<stdio.h>
int main(){
	double number;
	
	printf("The number is: ");
	scanf("%lf",&number);
	
	printf("\n2 Decimal places: %.2lf\n",number);
	
	printf("\n 5 decimal places: %.5lf\n",number);
	
	return 0;
}