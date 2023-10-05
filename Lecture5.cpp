#include<iostream>
using namespace std;

int main()
	{
		int x;   //variable name of type int, stores single integer value
		
		//Arrays store multiple values in single variabe name
		
		//Array: It is a data structure which can represent a collection of data items which have the same data type.
		//Declaring: datatype arrayName[Size];
		
		//int a[5];  //array of name a which can store 5 elements , index start from 0 and not 1
		
		//first element have index 0 , can be accessed using a[0]
		//second element have index 1 , can be accessed using a[1]
		//and goes till a[4]
		//to access element n, we can access as arrayName[n-1]
		
/*		Taking multiple inputs like this is difficult for higher number of input variables
		int a,b,c,d,e;
		cout<<"Give 5 integers as input: ";
		cin>>a>>b>>c>>d>>e;
		cout<<"The integers in reverse order are: <<e<<d<<c<<b<<a<<endl;
*/
		
		//size of the array can also be given as a mathematical expression
/*		
		int a[4];
		int i;
		for(i=0;i<5;i++)   //for loop
			{
				cin>>a[i];
			}
		cout<<"5 given integers are: ";
		for(i=0;i<5;i++)   
			{
				cout<<a[i]<<" ";
			}					
*/	
		int a[10];
		int i;
		for(i=0;i<10;i++)   
			{
				cin>>a[i];
			}		
			
		cout<<"10 given integers are: ";
		for(i=9;i>=0;i--)   //for loop
			{
				cout<<a[i]<<" ";
			}		
		//Array elements are stored in continuous memory locations
				
	}
