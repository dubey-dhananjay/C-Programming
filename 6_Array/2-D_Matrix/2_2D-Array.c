#include<stdio.h>
 int main(){
 	
 	int arr[2][2];
 	int i,j,k=1;
 	
 	for(i=0;i<2;i++){
		for(j=0;j<2;j++,k++){
			printf("Enter the %d Element: ",k);
			scanf("%d",&arr[i][j]);
		}
	}
 	printf("\n\n2-D Matrix is:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
 	
 }
 
/*
OUTPUT:

Enter the 1 Element: 789
Enter the 2 Element: 456
Enter the 3 Element: 123
Enter the 4 Element: 951


2-D Matrix is:
789     456
123     951

*/
