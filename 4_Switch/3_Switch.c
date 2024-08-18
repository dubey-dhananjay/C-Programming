#include<stdio.h>
#include<string.h>
int main(){
	
	char day[10];
	int daynum;
	
	printf("Enter Day: ");
	scanf("%s",&day);
	
	if(strcmp(day,"Monday")==0){
		daynum=1;
	}
	else if(strcmp(day,"Tuesday")==0){
		daynum=2;
	}
	else if(strcmp(day,"Wednesday")==0){
		daynum=3;
	}
	else if(strcmp(day,"Thursday")==0){
		daynum=4;
	}
	else if(strcmp(day,"Friday")==0){
		daynum=5;
	}
	else if(strcmp(day,"Saturday")==0){
		daynum=6;
	}
	else if(strcmp(day,"Sunday")==0){
		daynum=7;
	}
	else{
		daynum=8;
	}
	
	
	switch(daynum){
		
		case 1:
			printf("First Day of Weak");
			break;
		case 2:
			printf("Second Day of Weak");
			break;
		case 3:
			printf("Third Day of Weak");
			break;
		case 4:
			printf("Fourth Day of Weak");
			break;
		case 5:
			printf("Fifth Day of Weak");
			break;
		case 6:
			printf("Sixth Day of Weak");
			break;
		case 7:
			printf("Seventh Day of Weak");
			break;
		default:
			printf("In-Valid Day");
			break;
			
	}
	
	return 0;
	
}
