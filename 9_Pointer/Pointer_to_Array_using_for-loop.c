#include<stdio.h>
 int main(){
 	
 	int arr[5]={10,20,30,40,50};
 	int i=0;
 	
 	for(i=0;i<5;i++){
 		printf("Address: %p\t  Value: %d\n",arr+i,*(arr+i));
	 }	
 }