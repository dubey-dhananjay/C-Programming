#include<stdio.h>
 int main()
 {
 	int a,b,add=0;
 	int arr[3][3];
 	
 	for(a=0;a<3;a++){
 		for(b=0;b<3;b++){
 			printf("Enter the Elements: ");
 			scanf("%d",&arr[a][b]);
		 }
	 }
	
	printf("Entered Elements are: \n");
	
	for(a=0;a<3;a++){
 		for(b=0;b<3;b++){
 			printf(" %d\t ",arr[a][b]);
 			add=add+arr[a][b];
 			
		 }
		printf("\n"); 
		 
	 } 
	printf("\nAddition of all the Elements are %d",add); 
	 
 }
