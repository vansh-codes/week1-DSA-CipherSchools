#include<iostream>
using namespace std;

int main()
	{
/*		
		int a,b;
		int c,d;
		cout<<"Input 4 integers a,b,c and d: ";
		cin>>a;
		cin>>b;
		cin>>c;
		cin>>d;
		
		//Statement : a>b
		// AND->&& , OR -> ||
		cout<<(a>b && c>d)<<endl;  //true equals 1 , false equals 0
		cout<<(a>b || c>d)<<endl;  
*/


/*
		float a;
		cout<<"Enter floating point number: ";
		cin>>a;
		
		//if-else ladder
		if(a>0.01)
			{
				cout<<"The condition in if statement is True"; //if true then only executed
			}
		else
			{
				cout<<"The condition is False";
			}
*/

		int marks;
		cout<<"Enters marks to calculate: ";
		cin>>marks;
		
		//if ladder
/*		if(marks>90)
			{
				cout<<"A";
			}
		if(marks<90 && marks>80)
			{
				cout<<"B";
			}
		if(marks<80 && marks>70)
			{
				cout<<"C";
			}		
		if(marks<70)
			{
				cout<<"PASS";
			}
*/
			
			
		//if - else if - else ladder
		if(marks>90)
			{
				cout<<"A";
			}
		else if(marks>80)
			{
				cout<<"B";
			}
		else if(marks>70)
			{
				cout<<"C";
			}		
		else
			{
				cout<<"PASS";
			}
		cout<<endl;
		
		int a;
		cout<<"Enter a integer: ";
		cin>>a;
		
		//switch statement
		switch(a)
			{
				case 1:
					cout<<"The value of a is 1";
					break;
				case 2:
					cout<<"The value of a is 2";
					break;
				default:
					cout<<"Default will always be printed";
					break;					
			}
		
		return 0;
	}
