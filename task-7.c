#include<stdio.h>
int main(){
	int age;
	float height;
	double CGPA;
	char Grade;
	
	printf("Your Age: ");
	scanf (" %d", &age);
	
	printf("Enter height:");
	scanf(" %f", &height);
	
	printf("Enter CGPA: ");
	scanf(" %lf", &CGPA);
	
	printf("Enter Grade:");
	scanf(" %c", &Grade);
	
	return 0;
}