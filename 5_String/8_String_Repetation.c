//String Upper-Repetation
#include<stdio.h>
#include<string.h>
int main(){
	
	char str[50];
	int i=5;
	
	while(i>0){
		
		printf("\nEnter Name: ");
		gets(str);
		
		printf("%s",strupr(str));
		i--;
		
	}
	
	return 0;
}
