//E-nums
#include<stdio.h>
enum Week {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main(){
	
	enum Week Today;
	Today=Friday;
	printf("Day %d",Today);
	
	return 0;
}