//Return Type Function
#include<stdio.h>

int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
float div(float a,float b){
	return a/b;
}

int main(){
	
	int x,y;
	
	printf("Enter the First Number: ");
	scanf("%d",&x);
	printf("Enter the Second Number: ");
	scanf("%d",&y);
	
	printf("Addition is: %d",add(x,y));
	printf("\nSubtraction is: %d",sub(x,y));
	printf("\nMultiplication is: %d",mul(x,y));
	printf("\nDivision is: %f",div(x,y));
	
	return 0;
}
