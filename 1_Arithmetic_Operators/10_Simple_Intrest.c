//Simple Intrest
#include<stdio.h>
int main(){
	
	int n; //Number of Years
	float p; //Principle Amount
	float r; //Rate of Intrest
	float SI;
	
	printf("Enter the Principle Amount: ");
	scanf("%f",&p);
	
	printf("Enter the Rate of Intrest: ");
	scanf("%f",&r);
	
	printf("Enter the Number of Years: ");
	scanf("%d",&n);
	
	SI=(p*n*r)/100;
	
	printf("\nSimple Intrest: %f",SI);
	
	return 0;
}

/*

OUTPUT:

Enter the Principle Amount: 12000
Enter the Rate of Intrest: 2
Enter the Number of Years: 2

Simple Intrest: 480.000000

*/
