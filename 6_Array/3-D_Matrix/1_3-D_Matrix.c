//3-D Matrix
#include<stdio.h>
 int main(){
 	
 	int arr[3][3]={{11,12,13},{14,15,16},{17,18,19}};
 	int i,j;
 	
 	printf("3-D Matrix:\n");
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			printf("%d\t",arr[i][j]);
		}
		 printf("\n");
	}
 	
}

/*
OUTPUT:

3-D Matrix:
11      12      13
14      15      16
17      18      19

*/

