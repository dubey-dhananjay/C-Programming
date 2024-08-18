#include<stdio.h>
 int main(){
 	
 	int size;
 	
 	printf("Enter the Size of Array: ");
 	scanf("%d",&size);
 	
 	int arr[size];
 	
 	if(size>1 && size<=50){
 		int i;
		for(i=0;i<5;i++){
			printf("Enter the %d Element: ",i+1);
			scanf("%d",&arr[i]);
		}
	
		printf("\n\n\n");
		for(i=0;i<5;i++){
			printf("Element on %d Index is: %d\n",i,arr[i]);
		}
	}
	else{
		printf("\nIn-Valid Size");
	}
 	
 }
 
/*
OUTPUT:

Enter the Size of Array: 5
Enter the 1 Element: 741
Enter the 2 Element: 852
Enter the 3 Element: 963
Enter the 4 Element: 123
Enter the 5 Element: 456



Element on 0 Index is: 741
Element on 1 Index is: 852
Element on 2 Index is: 963
Element on 3 Index is: 123
Element on 4 Index is: 456
*/
