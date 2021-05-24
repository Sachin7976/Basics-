#include<iostream>
using namespace std;
int main()
{
	int A[100],N,answer=1;
	cout<<"please enter the size of array : ";
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{
		answer=A[i]*i;
	}
	
	cout<<answer;
	
	return 0;
}
