#include <iostream>
using namespace std;
int main()
{
	int mark;
	char x;
	do
	{
		cout<<"Please enter a test mark: ";
		cin>>mark;
		if(mark<0||mark>100){
			cout<<"INVALID RANGE"<<endl;
		}
		else if(mark>=80&&mark<=100){
			cout<<"your grade is A"<<endl;
		}
			else if(mark>=55&&mark<=79){
			cout<<"your grade is B"<<endl;
		}
	     cout<<"do you whish to continue y for y and n for no";
	     cin>>x;
	     cout<<endl;
		
	}while(x!='n');
	cout<<"you end the program....."<<endl;
	return 0;
}