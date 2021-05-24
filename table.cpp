#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a positive number : ";
    cin>>number;
    cout<<"Table of the entered number is \n";

    for(int i=1;i<=10;i++)
    {
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}