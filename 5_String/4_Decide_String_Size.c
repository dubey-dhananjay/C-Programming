#include<stdio.h>
#include<string.h>
 int main(){
 	
 	int n;
 	
 	printf("Enter the Number of Character of your String: ");
 	scanf("%d",&n);
 	
 	char name[n+1];
 	
 	printf("Enter your String: ");
 	gets(name);
 	gets(name);
 	
 	for(int i=0;i<n;i++){
 		printf("%c\n",name[i]);
	 }
 	
 }
