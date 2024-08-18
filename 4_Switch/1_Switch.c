//Switch-Case
#include<stdio.h>
 int main(){
 	
 	int num;
 	
 	printf("Enter a Number: ");
 	scanf("%d",&num);
 	
 	switch(num){
 		
 		case 1:
 			printf("\nEntered Number is One");
 			break;
 		
 		case 2:
 			printf("\nEntered Number is Two");
 			break;
 		
 		case 3:
 			printf("\nEntered Number is Three");
 			break;
 		
 		case 4:
 			printf("\nEntered Number is Four");
 			break;
 		
		default:
			printf("\nIn-Valid Choice");
			break;
	}
 	
 	return 0;
}

/*
OUTPUT:
	
Enter a Number: 4

Entered Number is Four
*/
