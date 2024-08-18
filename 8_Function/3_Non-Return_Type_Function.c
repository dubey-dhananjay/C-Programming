//Non-Return Type Function
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
	
	add(x,y);
	sub(x,y);
	mul(x,y);
	div(x,y);
	
	return 0;
}
