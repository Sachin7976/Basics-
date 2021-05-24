#include<iostream>
using namespace std;
int main()
{
	int number1,number2;
	cout<<"enter the first number : "<<endl;
	cin>>number1;
	cout<<"enter the second number : "<<endl;
	cin>>number2;
	cout<<"numbers before swap : "<<endl;
	cout<<"first number : "<<number1<<endl;
	cout<<"second number : "<<number2<<endl;
	cout<<endl;
	number1 = number1 + number2 ;
	number2 = number1 - number2 ;
	number1 = number1 - number2 ;
	cout<<"numbers after swap : "<<endl;
	cout<<"first number : "<<number1<<endl;
	cout<<"second number : "<<number2<<endl;
	return 0;	
}
