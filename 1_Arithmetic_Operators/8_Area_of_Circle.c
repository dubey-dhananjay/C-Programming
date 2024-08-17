//Area of Circle
#include<stdio.h>
#include<math.h>
int main(){
	
	float pi=3.14;
	
	int radius;
	
	printf("Enter the Radius: ");
	scanf("%d",&radius);
	
	float Area=pi*pow(radius,2);
	
	printf("Area of Circle is: %f",Area);
	
	return 0;
}

/*
OUTPUT:

Enter the Radius: 10
Area of Circle is: 314.000000

*/
