//Memory Allocation
#include<stdio.h>
#include<stdlib.h>
 int main(){
 	
 	int size,i;
 	
 	printf("Enter the Size of Array: ");
 	scanf("%d",&size);
 	
 	int* p=(int*) malloc(size*sizeof (int));
 	
 	for(i=0;i<size;i++){
 		printf("Enter the %d Element: ",i+1);
 		scanf("%d",p+i);
	 }
	
	printf("\n\nEntered Elements are: \n\n\n");
	
	for(i=0;i<size;i++){
		printf("%d\t",*(p+i));
	}
	
	free(p);
	p=NULL;
 	
 }

/*
OUTPUT:
 
Enter the Size of Array: 5

Enter the 1 Element: 101
Enter the 2 Element: 102
Enter the 3 Element: 103
Enter the 4 Element: 104
Enter the 5 Element: 105


Entered Elements are:


101     102     103     104     105

*/