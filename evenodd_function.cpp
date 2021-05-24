#include<iostream>
#include<math.h>
using namespace std;
bool even_odd(int number)
{
    if((number%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    if(even_odd(number))
    {
        cout<<"Even Number "<<endl;
    }
    else
    {
        cout<<"Odd Number "<<endl;
    }
    return 0;
}