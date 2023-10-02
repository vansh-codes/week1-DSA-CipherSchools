/*
What is a variable ?
- whose value can be changed is known as a variable.

What is a constant ?
- whose value will not change throughout the program execution is known as a constant.

What is datatype ?
- it defines a type of variable which is declared.

Rules for declaring variable name
- must begin with a alphabet or underscore, cannot begin with digit
- underscore is the only valid special character
- variable names are case sensitive
- cannot be reserved keywords

Example of built-in datatypes: int, float, double, char, boolean, void
Example of user defined datatypes: struct, enum, class, etc

Declaring a variable
Syntax:
datatype variableName;
Example:
	int variable1;
	char variable2;
	float variable3;
*/

#includeA<iostream>
using namespace std;

int main()
	{
		//Declare 2 variables 
		int a,b;
		
		//assigning value
		a=3;
		b=5;
		
		//displaying sum
		cout<<a+b; 
		cout<<endl;
		cout<<"a+b";
		return 0;
	}
