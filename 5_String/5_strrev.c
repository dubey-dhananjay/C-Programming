//String Reverse
#include<stdio.h>
#include<string.h>
 int main(){
 	
 	char name[20];
 	
 	printf("Enter Your Name: ");
 	gets(name);
 	//gets(name);
 	
 	printf("\n\nYour Name in Reverse is %s",strrev(name));
 }
