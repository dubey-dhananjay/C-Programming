#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main(int argc,char const* argv[]){
	
	char *operation=argv[1];
	int result=0;
	
	if(strcmp(operation,"add")==0){
		for(int i=2;i<argc;i++){
			result+=atoi(argv[i]);
		}
		printf("Addition is %d",result);
	} 	
 	if(strcmp(operation,"Subtract")==0){
 		for(int i=2;i<argc;i++){
 			if(i==2){
 				result=atoi(argv[2]);
			 }
			 else{
			 	result=atoi(argv[i]);
			 }
		 }
		printf("Subtraction %d",result);
	 }
 }