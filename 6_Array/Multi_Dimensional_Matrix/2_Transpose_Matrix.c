//Transpose of Array
#include<stdio.h>
 int main(){
 	
 	int rows,col;
 	printf("Enter the Number of Rows: ");
 	scanf("%d",&rows);
 	printf("Enter the Number of Columns: ");
 	scanf("%d",&col);
 	
 	int arr[rows][col];
 	int i,j,k=1;
 	
 	
 	//Storing the Matrix Element
 	for(i=0;i<rows;i++){
 		for(j=0;j<col;j++,k++){
 			printf("Enter the %d Element: ",k);
 			scanf("%d",&arr[i][j]);
		}
	}
	//Printing the Matrix Element
 	printf("\n\n\n%d-%d Matrix:\n",rows,col);
 	for(i=0;i<rows;i++){
 		for(j=0;j<col;j++){
 			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	int trans[rows][col];
 	for(i=0;i<rows;i++){
 		for(j=0;j<col;j++){
 			trans[j][i]=arr[i][j];
		}
	}
	printf("\n\n\nTranspose Matrix:\n",rows,col);
 	for(i=0;i<col;++i){
 		for(j=0;j<rows;++j){
 			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	
 }

/*
OUTPUT:

Enter the Number of Rows: 2
Enter the Number of Columns: 3
Enter the 1 Element: 741
Enter the 2 Element: 852
Enter the 3 Element: 963
Enter the 4 Element: 123
Enter the 5 Element: 456
Enter the 6 Element: 789



2-3 Matrix:
741     852     963
123     456     789



Transpose Matrix:
741     123
852     456
963     789

*/
