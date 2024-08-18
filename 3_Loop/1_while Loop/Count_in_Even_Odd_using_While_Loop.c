#include<stdio.h>
 int main(){
 	
 	int i=1,count1=0,count2=0;
 	
 	while(i<=10){ 
 		if(i%2==0){
 			printf("Even: %d\n",i);
 			count1++;
 		}
 		else{
 			printf("Odd: %d\t",i);
 			count2++;
		}
		i++;
	}
	
	printf("\n\nThere are %d Even Numbers",count1);
	printf("\nThere are %d Odd Numbers",count2);
 }
 
/*
OUTPUT:

Odd: 1  Even: 2
Odd: 3  Even: 4
Odd: 5  Even: 6
Odd: 7  Even: 8
Odd: 9  Even: 10


There are 5 Even Numbers
There are 5 Odd Numbers
*/
