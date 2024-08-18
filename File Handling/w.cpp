#include<stdio.h>
 int main(){
	
	FILE *fp;
	
	fp=fopen("C:\\Users\\DiSHA\\Desktop\\Sample.txt","w");
							// OR
//	fp=fopen("C:\\Users\\DiSHA\\Desktop\\Sample.txt","a");
	
	if(fp==NULL){
		printf("Unable to Create a File\n");
	}
	else{
		printf("File Craeted Sucessfully....!\n");
	}
	
	fclose(fp);
	 	
 	return 0;
 	
}
