//Temperature Converter
#include<stdio.h>
 int main(){
	
	float degree,faren,kelvin;
	
	printf("Enter the Temperature in Degree: ");
	scanf("%f",&degree);
	
	faren=degree*(9/5)+32;
	printf("\n\nThe Value of Temperature in Farenheit is %f",faren);
	
	kelvin=273.12+degree;
	printf("\n\nThe Value of Temperature in Kelvin is %f",kelvin);
		
 }
