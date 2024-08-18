//Positive, Negative and Neutral
#include<stdio.h>
 int main(){
 	
 	int num;
 	
 	printf("Enter a Number: ");
 	scanf("%d",&num);
 	
 	if(num>0){
 		printf("%d is a Positive Number");
	}
	else if(num==0){
		printf("Zero is Neutral, It's neither Positive nor Negative");
	}
	else{
		printf("%d is a Negative Number");
	}
 	
}
