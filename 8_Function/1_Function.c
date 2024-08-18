/*
Function

1. Function are a fundamental building block
2. Function are used to organize code
3. Function makes the code more readable, reusable and maintainable

	There are Two Types of Function:
	1. Bulit-in Function
	2. User Defined Function
*/

#include<stdio.h>

int square(int num){ //Function to Calculate the Square of a number
	int result;
	
	result= num*num;
	
	return result;
}

int main(){
	
	int number;
	
	printf("Enter a Number: ");
	scanf("%d",&number);
	
	printf("\nSquare of a Number is: %d",square(number));
	
	return 0;
}

/*
OUTPUT:

Enter a Number: 2

Square of a Number is: 4

*/
