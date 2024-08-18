//Butterfly Pattern
#include<stdio.h>
 int main(){
 	
    int rows,i,j;

    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if (j==1 || j== rows || i==j || j==rows-i+1){
                printf("*");
            } 
			else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT:

Enter the Number of Rows: 5
*   *
** **
* * *
** **
*   *


*/
