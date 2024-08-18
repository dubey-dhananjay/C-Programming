#include<stdio.h>
 int main(){
 	
 	int marks[5];
 	int add=0;
 	float per;
	int i;
 	
 	for(i=0;i<5;i++){
 		printf("Enter the Marks of %d Subject: ",i+1);
 		scanf("%d",&marks[i]);
 		add+=marks[i];    //add=add+arr[i];  OR per+=arri[i];
	}
	per=add/5;
	
	printf("\nCalculated Percentage is: %f",per);
	
	return 0;
 }
 
/*
OUTPUT:

Enter the Marks of 1 Subject: 90
Enter the Marks of 2 Subject: 90
Enter the Marks of 3 Subject: 90
Enter the Marks of 4 Subject: 90
Enter the Marks of 5 Subject: 90

Calculated Percentage is: 90.000000
*/
 
