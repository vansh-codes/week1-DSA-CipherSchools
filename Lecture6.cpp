#include<iostream>
using namespace std;

int main()
	{
		//LOOP is something which repeat itself
		
		//Twon types of LOOPS:
		//1. For loop      
		//SYNTAX:
/*  
		for(initilization ; condition ; update)
			{
				//code to be executed
			}
*/
	
	    //Example1:
/*		for(int i=1; i<=5;i++)
			{
				cout<<i<<" ";  //prints value of i
			}
*/
		cout<<"FOR LOOPS: "<<endl;
		int i;
		for(i=1; i<101; i++)    //++i -> preincrement ;;; i++ -> postincrement
			{
				cout<<i<<" ";
			}
			
		cout<<endl<<endl;
		cout<<"WHILE LOOPS: "<<endl;
		int j=1;               //initialization
		while(j<101)           //condition
			{
				cout<<j<<" ";
				j++;           //updation
			}
		cout<<endl<<endl;
		
		cout<<"Guess the number 65 in 100 chances"<<endl;
		int k;               //initialization
		int input;
		
		for(k=1; k<101; k++)           //condition
			{
				cin>>input;
				if(input==65)
					{
						cout<<"Congratulations, you guessed the correct number"<<endl;
						break;
					}
			}		
	
	}
