#include<stdio.h>
#include<stdlib.h>
 int main(){
 	
 	int i,size;
 	
 	printf("Enter the Size of Array: ");
 	scanf("%d",&size);
 	
 	int* p=(int*) malloc(size*sizeof(int));
 	
 	for(i=0;i<size;i++){
 		printf("Enter the %d Element: ",i+1);
 		scanf("%d",p+i);
	 }
	
 	int new_size,index;
 	
 	index=i;
 	
 	printf("\nEnter the New Size of Array: ");
 	scanf("%d",&new_size);
 	
 	p=(int*) realloc(p,new_size);
 	
 	for(i=0;i<new_size;i++){
 		printf("Enter the %d Element: ",i+1);
 		scanf("%d",p+index+i);
	 }
	
	printf("\n\n\nElements are: \n");
	
	for(i=0;i<size+new_size;i++){
		printf("%d\t",*(p+i));
	}
	
	free(p);
	p=NULL;
 
 }
 
/*
OUTPUT:
	
Enter the Size of Array: 5
Enter the 1 Element: 1
Enter the 2 Element: 2
Enter the 3 Element: 3
Enter the 4 Element: 4
Enter the 5 Element: 5

Enter the New Size of Array: 6
Enter the 1 Element: 1
Enter the 2 Element: 2
Enter the 3 Element: 3
Enter the 4 Element: 4
Enter the 5 Element: 5
Enter the 6 Element: 6


Elements are:
1       2       3       4       5       1       2       3       4       5       6

*/	