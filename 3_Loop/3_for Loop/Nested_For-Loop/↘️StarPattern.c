//Star Pattern
#include<stdio.h>
 int main(){
 	
 	int rows;
 	printf("Enter the Number of Rows: ");
 	scanf("%d",&rows);
 	
 	int i,j;
 	
 	for(i=1;i<=rows;i++){
 		for(j=1;j<=i;j++){
 			printf("* ");
		}
		printf("\n");
	}
 	
 }

/*
OUTPUT:

Enter the Number of Rows: 5
*
* *
* * *
* * * *
* * * * *

*/

