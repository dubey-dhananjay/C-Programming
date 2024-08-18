//Pointer Arithmetic
#include<stdio.h>
 int main(){
 	
 	int a=5;
 	int *p;
 	p=&a;
 	
 	printf("Value of p= Address of a= %u\n",p);
 	printf("Value of p= %u\n",++p);
 	printf("Value of p= %u\n",p++);
 	printf("Value of p= %u\n",p);
 	printf("Value of p= %u\n",--p);
 	printf("Value of p= %u\n",p--);
 	printf("Value of p= %u\n",p);
 }