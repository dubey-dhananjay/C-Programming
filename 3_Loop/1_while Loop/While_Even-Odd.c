#include<stdio.h>
 int main(){
 	
 	int i=1;
 	
 	while(i<=10){ 
 		if(i%2==0){
 			printf("Even: %d\n",i);
 		}
 		else{
 			printf("Odd: %d\t",i);
		}
		i++;
	}
 }
 
/*
OUTPUT:

Odd: 1  Even: 2
Odd: 3  Even: 4
Odd: 5  Even: 6
Odd: 7  Even: 8
Odd: 9  Even: 10

*/
