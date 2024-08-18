//Pointer in Structure
#include<stdio.h>
#include<string.h>
 struct Student{
 	int roll_no;
 	char name[50];
 	float per;
 };
 int main(){
 	
 	struct Student *S1;
 	
 	//printf("Enter your Name: ");
 	//gets(S1->name);
 	printf("Enter your Roll Number: ");
 	scanf("%d",&S1->roll_no);
 	printf("Enter your Percentage: ");
 	scanf("%d",&S1->per);
 	
 	printf("\n\nEneterd: \n");
 	
 	printf("Name: %s\n",S1->name);
 	printf("Roll Number: %d\n",S1->roll_no);
 	printf("Percentage: %f\n",S1->per);
 	
 }