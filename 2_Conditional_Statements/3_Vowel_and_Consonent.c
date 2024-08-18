//Vowel and Consonent
#include<stdio.h>
 int main(){
 	
 	char alpha;
 	
 	printf("Enter a Alphabet: ");
 	scanf("%c",&alpha);
 	
 	if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
 		printf("%c is a Vowel",alpha);
	}
	else if(alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U'){
 		printf("%c is a Vowel",alpha);
	}
	else{
		printf("%c is a Consonent",alpha);
	}
 	
}
