#include<stdio.h>
 int main()
 {
 	int a,b,add=0;
 	int arr[3][3];
 	
 	for(a=0;a<3;a++){
 		for(b=0;b<3;b++){
 			printf("Enter the Elements: ");
 			scanf("%d",&arr[a][b]);
 			if (a == 0 && b == 0) {
 				add = arr[a][b];
			 } else {
			 	add *= arr[a][b];
			 }
		 }
	 }
	
	// printf("Entered Elements are: \n");
	 
	printf("\nAddition of all the Elements are %d",add); 
	 
 }
