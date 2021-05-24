#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"Maximum Number : "<<a<<endl;
        }
        else
        {
            cout<<"Maximum Number : "<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"Maximum Number : "<<b<<endl;
        }
        else
        {
            cout<<"Maximum Number : "<<c<<endl;
        }
    }
     if(a<b)
    {
        if(a<c)
        {
            cout<<"Minimum Number : "<<a<<endl;
        }
        else
        {
            cout<<"Minimum Number : "<<c<<endl;
        }
    }
    else
    {
        if(b<c)
        {
            cout<<"Minimum Number : "<<b<<endl;
        }
        else
        {
            cout<<"Minimum Number : "<<c<<endl;
        }
    }
    return 0;
}
