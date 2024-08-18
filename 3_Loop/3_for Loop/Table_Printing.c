#include<stdio.h>
 int main(){
 	
 	int i,t;
 	
 	printf("Enter the Table which have to be Printed: ");
 	scanf("%d",&t);
 	
 	for(i=1;i<=10;i++){
 		printf("%d*%d=%d\n",t,i,i*t);
	 }
 	
 }
