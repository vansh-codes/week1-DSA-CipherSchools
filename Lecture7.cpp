#include<iostream>
using namespace std;

int main()
	{
		//DO WHILE LOOPS
		int password;
		cout<<"Enter password: ";
		cin>>password;
		
		do
			{
				cout<<"The password does not meet the require condition"<<endl;
				cin>>password;
			}
		while(password<999999);
		cout<<"The user has now entered a correct password."<<endl;
		
		int count=0;
		while(1)
			{
				cout<<"INFINITE LOOP"<<endl;
				count++;                         //update
				
				if(count>100)                   //condition
					{
						cout<<"Breaking Infinite Loop"<<endl;
						break;                  //breaking the loop
					}
			}
	}
