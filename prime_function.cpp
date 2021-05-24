#include<iostream>
#include<math.h>
using namespace std;
bool prime(int number)
{
    for(int i=2;i<=sqrt(number);i++)
    {
        if(number%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b;
    cout<<"Enter the range : ";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        cout<<i<<endl;
    }
    return 0;
}