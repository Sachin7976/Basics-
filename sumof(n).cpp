#include<iostream>
using namespace std;
int main()
{
    int number,sum;
    cout<<"enter number : ";
    cin>>number;
    for(int x=1;x<=number;x++)
    {
        sum=sum+x;

    }
    cout<<"Sum of all the numbers is "<<sum<<endl;
    return 0;
    }