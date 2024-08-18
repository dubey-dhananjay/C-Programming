//Menu Driven Function
#include<stdio.h>

int add(int a,int b){
	printf("\nAddition is: %d",a+b);
}
int sub(int a,int b){
	printf("\nSubtraction is: %d",a-b);
}
int mul(int a,int b){
	printf("\nMultiplication is: %d",a*b);
}
float div(float a,float b){
	printf("\nDivision is: %f",a/b);
}

int main(){
	
	int x,y;
	
	printf("Enter the First Number: ");
	scanf("%d",&x);
	printf("Enter the Second Number: ");
	scanf("%d",&y);
	
	printf("\n----MENU----\n");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	
	int choice;
	
	printf("\n\nEnter your Choice: ");
	scanf("%d",&choice);
	
	if(choice==1){
		add(x,y);
	}
	else if(choice==2){
		sub(x,y);	
	}
	else if(choice==3){
		mul(x,y);
	}
	else if(choice==4){
		div(x,y);	
	}
	else{
		printf("\nIn-Valid Choice");
	}	
	
	return 0;
}
