#include<iostream>
#include<string>
using namespace std;
struct student 
{
	int roll_no;
	int arr[5];
	char name[25];
	float per;
	
};
int main()
{
	int i;
	struct student s1;
	
	cout<<"Enter your name :";
	cin>>s1.name;
	
	cout<<"Enter Your Roll_no  :";
	cin>>s1.roll_no;
	
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter The Marks:";
		cin>>s1.arr[i];
		s1.per+=s1.arr[i];
	}
	//*s1.per+=s1.arr[i];
	s1.per/=5;
	
	cout<<"Enter Roll_no is : "<<s1.roll_no<<endl;
	cout<<"Your name : "<<s1.name<<endl;
	cout<<"Your per : "<<s1.per<<endl;
}
