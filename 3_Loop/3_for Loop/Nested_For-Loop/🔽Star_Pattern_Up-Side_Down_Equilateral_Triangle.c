//Star Pattern Up-Side Down Equilateral Triangle
#include<stdio.h>
 int main(){
 	
 	int rows;
 	printf("Enter the Number of Rows: ");
 	scanf("%d",&rows);
 	
 	int i,j,k;
 	
 	for(i=rows;i>=1;i--){
 		for(j=0;j<rows-i;j++){
 			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
 	
 }

/*
OUTPUT:

* * * * *
 * * * *
  * * *
   * *
    *

*/

