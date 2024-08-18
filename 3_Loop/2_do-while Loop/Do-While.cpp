#include<stdio.h>
 int main(){
 	
 	int i,f;
 	
 	printf("Enter the Initial Value: ");
 	scanf("%d",&i);
 	printf("Enter the Final Value: ");
 	scanf("%d",&f);
 	
 	do{
 		printf("%d\n",i);
		i++; 
	}
 	while(i<=f);
 	
 }
