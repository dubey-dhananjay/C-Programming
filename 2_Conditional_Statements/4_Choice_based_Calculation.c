//Choice based Calculation
#include<stdio.h>
 int main(){
 	
 	int num1,num2;
 	
 	printf("Enter a Number: ");
 	scanf("%d",&num1);
 	printf("Enter another Number: ");
 	scanf("%d",&num2);
 	
 	printf("\nMENU");
 	printf("\n1. Addition");
 	printf("\n2. Subtraction");
 	printf("\n3. Multiplication");
 	printf("\n4. Division");

 	int choice;
 	printf("\nEnter your Choice:");
 	scanf("%d",&choice);
 	
 	if(choice==1){
 		printf("\nAddition of %d and %d is %d",num1,num2,num1+num2);
	}
	else if(choice==2){
 		printf("\nSubtraction of %d and %d is %d",num1,num2,num1-num2);
	}
	else if(choice==3){
 		printf("\nMultiplication of %d and %d is %d",num1,num2,num1*num2);
	}
	else if(choice==4){
 		printf("\nDivision of %d and %d is %d",num1,num2,num1/num2);
	}
	else{
		printf("\nIn-Valid Choice");
	}
 }
