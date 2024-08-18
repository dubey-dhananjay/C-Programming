//Grade Calculator
#include<stdio.h>
 int main(){
 	
 	int per;
 	
 	printf("Enter your Percentage: ");
	scanf("%d",&per);
	
	if(per>100 || per<=0){
		printf("\nYou have Entered In-Valid Percentage");
	}
	else if(per<=100 && per>=90){
		printf("\nYour have Passed with Distinction");
	}
	else if(per<90 && per>=80){
		printf("\nYour Grade is 'A+'");
	}
	else if(per<80 && per>=70){
		printf("\nYour Grade is 'A'");
	}
	else if(per<70 && per>=60){
		printf("\nYour Grade is 'B+'");
	}
	else if(per<60 && per>=50){
		printf("\nYour Grade is 'C'");
	}
	else if(per<50 && per>=40){
		printf("\nYour Grade is 'D'");
	}
	else if(per<40 && per>=35){
		printf("\nJust Pass");
	}
	else{
		printf("\nYou are Failed");
	}
 }
