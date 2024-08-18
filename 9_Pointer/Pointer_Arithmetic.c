#include<stdio.h>
 int main(){
 	
 	int a=5, *pi=&a;
 	char b='x',  *pc=&b;
 	float c=5.5, *pf=&c;
 	
 	printf("Value of pi= Address of a= %u\n",pi);
 	printf("Value of pc= Address of b= %u\n",pc);
 	printf("Value of pf= Address of c= %u\n",pf);
 	
 	pi++;
 	pc++;
 	pf++;
 	
 	printf("\n\nNow Value of pi is: %u\n",pi);
 	printf("Now Value of pc is: %u\n",pc);
 	printf("Now Value of pf is: %u\n",pf);
 }