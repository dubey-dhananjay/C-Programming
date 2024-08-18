#include<stdio.h>
 int main(){
	
	FILE *fp;
	
	fp=fopen("C:\\Users\\DiSHA\\Desktop\\Sample.txt","w");  //Overwites the Data onto the File
//							OR
//	fp=fopen("C:\\Users\\DiSHA\\Desktop\\Sample.txt","a"); //Adds up the Entered Data at the End of the Previously Entered Data
	
	if(fp==NULL){
		printf("Unable to Create a File\n");
	}
	else{
		printf("\t!....File Craeted Sucessfully....!\n\n");
		
		int num;
		printf("Enter a Number: ");
		scanf("%d",&num);
		
		printf("\nData Wrote into the File Sucessfully");
		
		fprintf(fp,"%d",num);
		
	}
	
	fclose(fp);
	 	
 	return 0;
 	
}
