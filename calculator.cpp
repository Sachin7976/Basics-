#include<iostream>
using namespace std;
int main()
{
    int addition,multiplication,subtraction,division,number1,number2,choice;
	cout<<"please enter the first  number :";
	cin>>number1;
	cout<<"please enter the second number :";
	cin>>number2;
	cout<<"Calculator menu - "<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"enter the arithematic opertion you want to perform(1,2,3,4) ";
	cin>>choice;
	if(choice==1)
	{
		addition=number1+number2;
		cout<<"addition of the  numbers = "<<addition<<endl;
	}
	else if(choice==2)
	{
		subtraction=number1-number2;
		cout<<"subtraction of the numbers = "<<subtraction<<endl;	
	}
	else if(choice==3)
	{
		multiplication=number1*number2;
		cout<<"multiplication of the  numbers = "<<multiplication<<endl;
	}
	else if(choice==4)
	{
		division=number1/number2;
		cout<<"division of the numbers = "<<division<<endl;
	}
	else
	{
		cout<<"no operation found!!!!!!"<<endl;
	}
	return 0;
}
	
