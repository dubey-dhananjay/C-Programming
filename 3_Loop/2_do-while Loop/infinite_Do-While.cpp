#include<stdio.h>
 int main(){
 	
 	char choice;
 	
 	do{
	
	int num1,num2;
 	
 	printf("\n---------------------------------------------------");
 	printf("\nEnter the First Number: ");
 	scanf("%d",&num1);
 	printf("Enter the Second Number: ");
 	scanf("%d",&num2);
 	
 	printf("\n\nMENU\n");
 	printf("\n1. Addition");
 	printf("\n2. Subtraction");
 	printf("\n3. Multiplication");
	printf("\n4. Division");
	
	int option;
	printf("\nEnter your choice: ");
	scanf("%d",&option);
	
	if(option==1){
		printf("\nAddition of %d and %d is %d",num1,num2,num1+num2);
	}
	else if(option==2){
		printf("\nSubtraction of %d and %d is %d",num1,num2,num1-num2);
	}
	else if(option==3){
		printf("\nMultiplication of %d and %d is %d",num1,num2,num1*num2);
	}
	else if(option==4){
		printf("\nDivision of %d and %d is %d",num1,num2,num1/num2);
	}
	else{
		printf("\nIn-Valid Choice");
	}
	
	printf("\n\nDo you want to continue[Y/n]: ");
	scanf("%c",&choice);
	scanf("%c",&choice);	
	}
 	while(choice=='Y'||choice=='y');
 }
 
/*
OUTPUT:


---------------------------------------------------
Enter the First Number: 1
Enter the Second Number: 2


MENU

1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 1

Addition of 1 and 2 is 3

Do you want to continue[Y/n]: Y

*/
