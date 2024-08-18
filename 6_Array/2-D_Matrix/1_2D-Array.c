#include<stdio.h>
 int main(){
 	
 	int arr[2][2]={{11,12},{13,14}};
 	int i,j;
 	
	/*
	printf("%d\t",arr[0][0]);
	printf("%d\n",arr[0][1]);
	printf("%d\t",arr[1][0]);
	printf("%d\n",arr[1][1]);*/
	
	printf("2-D Matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
 	
 }
 
/*
OUTPUT:

2-D Matrix is:
11      12
13      14

*/
