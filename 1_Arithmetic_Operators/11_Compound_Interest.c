//Compound Interest Calculator
#include<stdio.h>
 int main(){
 	
 	float CI,Principal,Time,RoI;
 	
 	printf("\nEnter the Principal Value: ");
 	scanf("%f",&Principal);
 	
 	printf("\nEnter the Rate of Ineterest: ");
 	scanf("%f",&RoI);
 	
 	printf("Enter the Time: ");
 	scanf("%f",&Time);
 	
 	CI=Principal*RoI*Time;
 	
 	printf("The Value of Compound Interest is %f",CI);
 	
 }
