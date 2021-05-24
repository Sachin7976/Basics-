#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number : ";
    cin>>number;
    for(int i=2;i<number;i++)
    {
       if((number%i)==0)
       {
           cout<<number<<" is non-prime number \n";
           break;
       } 
       else
       {
           cout<<number<<" is a prime number \n";
       }
    }
    return 0;
}