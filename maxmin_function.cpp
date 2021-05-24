#include<iostream>
using namespace std;
int max(int x,int y,int z)
{
    int maximum=x;
if(y>x)
 maximum=y;
if(z>y)
 maximum=z;
return maximum;
}

int min(int x, int y, int z)
{
int minimum=x;
if(y<x)
 minimum=y;
if(z<y)
 minimum=z;
return minimum;
}
int main()
{
    int x,y,z;
    cout<<"Enter three numbers : ";
    cin>>x>>y>>z;
    cout<<"Maximum Number : "<<max<<endl;
    cout<<"Minimum Number : "<<min<<endl;
    return 0;
}