//Eligible for Voting
#include<stdio.h>
 int main(){
 	
 	int age;
 	
 	printf("Enter your Age: ");
 	scanf("%d",&age);
 	
 	if(age>=18){
 		printf("You are Eligible for Voting");
	}
	else if(age>0){
		printf("You are not Eligible for Voting");
	}
	else{
		printf("In-Valid Age");
	}
 	
}
