#include<stdio.h>
 int main(){
 	
 	int num1,num2,num3;
 	
 	printf("Enter the First Number: ");
 	scanf("%d",&num1);
 	printf("Enter the Second Number: ");
 	scanf("%d",&num2);
 	printf("Enter the Third Number: ");
 	scanf("%d",&num3);
 	
 	if(num1==num2 || num2==num3 || num1==num3){
 		printf("\nEntered Number are Equal");
	}
	if(num1==0 || num2==0 || num3==0){
		printf("\nEnter Number is Zero");
	}
 	else if(num1>0 && num2>0 && num3>0){
		if(num1>num2 && num1>num3){
			printf("\nFirst Number is Greatest");
		}
		if(num2>num1 && num2>num3){
			printf("\nSecond Number is Greatest");
		}
		if(num3>num1 && num3>num2){
			printf("\nThird Number is Greatest");
		}
		if(num1<num2 && num1<num3){
			printf("\nFirst Number is Smallest");
		}
		if(num2<num1 && num2<num3){
			printf("\nSecond Number is Smallest");
		}
		if(num3<num1 && num3<num2){
			printf("\nThird Number is Smallest");
		}	
	}
	else{
		printf("Entered Number is Negative");
	} 
 }
