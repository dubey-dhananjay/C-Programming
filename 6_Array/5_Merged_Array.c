//Merged Array
#include<stdio.h>
 int main(){
 	
 	int size1;
 	printf("Enter the Size for First Array: ");
 	scanf("%d",&size1);
 	
 	int arr1[size1];
 	int i,k=0;
 	
 	int arrMer[size1];
 	
 	for(i=0;i<size1;i++){
 		printf("Enter the %d Element: ",i+1);
 		scanf("%d",&arr1[i]);
 		arrMer[k++]=arr1[i];
	}
	
	int size2;
	printf("\nEnter the Size for Second Array: ");
	scanf("%d",&size2);
	
	int arr2[size2];
	
	for(i=0;i<size1;i++){
 		printf("Enter the %d Element: ",i+1);
 		scanf("%d",&arr2[i]);
 		arrMer[k+i]=arr2[i];
	}
 	
 	printf("\nThe New Array(Merged Array):\n");
 	
 	arrMer[size1+size2];
 	
 	for(i=0;i<size1+size2;i++){
 		printf("%d\t",arrMer[i]);
	 }
 	
 }
