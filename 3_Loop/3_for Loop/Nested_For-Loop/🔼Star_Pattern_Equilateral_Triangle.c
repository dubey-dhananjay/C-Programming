//Star Pattern Equilateral Triangle
#include<stdio.h>
 int main(){
 	
 	int rows;
 	printf("Enter the Number of Rows: ");
 	scanf("%d",&rows);
 	
 	int i,j,k;
 	
 	for(i=1;i<=rows;i++){
 		for(j=1;j<=rows-i;j++){
 			printf(" ");
		 }
 		for(k=1;k<=i;k++){
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
