//2.5* log(x)+ cos(32)+ x^2+ y^2+ 2*x*y
#include<stdio.h>
#include<math.h>
int main(){
	
	int x,y;
	
	printf("Enter the Value of x: ");
	scanf("%d",&x);
	printf("Enter the Value of y: ");
	scanf("%d",&y);
	
	float Result=2.5*log(x)+cos(32)+pow(x,2)-pow(y,2)+2*x*y;
	
	printf("\n\n2.5*log(%d)+cos(32)+%d^2-%d^2+2*%d*%d = %f",x,x,y,x,y,Result);
	printf("\nCalculated Result is: %f",Result);
	
	return 0;
}

/*
OUTPUT:

Enter the Value of x: 1
Enter the Value of y: 2


2.5*log(1)+cos(32)+1^2-2^2+2*1*2 = 1.834223
Calculated Result is: 1.834223

*/
