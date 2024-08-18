//Array
#include<stdio.h>
 int main(){
 	
 	int arr[5];
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

/*
OUTPUT:

Enter the 1 Element: 951
Enter the 2 Element: 753
Enter the 3 Element: 456
Enter the 4 Element: 789
Enter the 5 Element: 123



Element on 0 Index is: 951
Element on 1 Index is: 753
Element on 2 Index is: 456
Element on 3 Index is: 789
Element on 4 Index is: 123

*/
