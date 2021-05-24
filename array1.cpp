#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout<<"please enter the elements of array : "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"the elements of the array are as follows : "<<endl<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
