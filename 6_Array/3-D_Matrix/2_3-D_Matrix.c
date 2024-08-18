#include<stdio.h>
 int main(){
 	
 	int arr[3][3];
 	int i,j,k=1;
 	
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++,k++){
 			printf("Enter the %d Element: ",k);
 			scanf("%d",&arr[i][j]);
		}
	}
 	printf("\n\n\n3-D Matrix:\n");
 	for(i=0;i<3;i++){
 		for(j=0;j<3;j++){
 			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
 	
}

/*
OUTPUT:

Enter the 1 Element: 741
Enter the 2 Element: 852
Enter the 3 Element: 963
Enter the 4 Element: 123
Enter the 5 Element: 456
Enter the 6 Element: 789
Enter the 7 Element: 321
Enter the 8 Element: 654
Enter the 9 Element: 987



3-D Matrix:
741     852     963
123     456     789
321     654     987

*/
