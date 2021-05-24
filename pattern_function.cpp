#include<iostream>
using namespace std;
void pattern()
{
	int number_of_rows;
	cout<<"please enter the number of rows : ";
	cin>>number_of_rows;
	for(int i=0;i<number_of_rows;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	pattern();
	pattern();
	pattern();
	return 0;
}
