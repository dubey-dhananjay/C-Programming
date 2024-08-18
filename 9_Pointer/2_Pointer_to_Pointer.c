//Pointer to Pointer
#include<stdio.h>
int main(){
	
	int a=5;
	int* p=&a;
	int** ptp=&p;
	
	printf("\nValue of Variable a is: %d",a);
	printf("\nAddress of Variable a is: %d",&a);
	
	printf("\n\nValue of Pointer p is: %d",p);
	printf("\nAddress of Pointer p is: %d",&p);
	
	printf("\n\nValue of Pointer to Pointer ptp is: %d",ptp);
	
	return 0;	
}
