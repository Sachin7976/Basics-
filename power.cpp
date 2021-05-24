#include<iostream>

using namespace std;

int main()
{
	int number,power;
	cout<<"please enter a number : "<<endl;
	cin>>number;
	cout<<"please enter the power of number : "<<endl;
	cin>>power;
	for(int i=1 ; i<power ; i++)
	{
		number = number * number;
	} 
	 cout<<"number raise to the power "<<power<<" is "<<number<<endl;
	 return 0;
}
