//String Copy
#include<stdio.h>
#include<string.h>
int main(){
	
	char str1[50]="Hii.. My name is XYZ, and I live in XYZ City";
	char str2[50];
	
	strcpy(str2,str1);
	printf("%s",str2);
	
	return 0;
}
