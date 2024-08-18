//String Concatenate
#include<stdio.h>
#include<string.h>
int main(){
	
	char str1[60],str2[60];
	
	printf("Enter the First String: ");
	gets(str1);
	
	printf("Enter the Second String: ");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("\nCombined String is: %s",str1);
	
	return 0;
}

/*

OUTPUT:

Enter the First String: New
Enter the Second String: Delhi

Combined String is: New Delhi

*/
