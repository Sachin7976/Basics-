#include<iostream>
using namespace std;
bool  check(int x,int y,int z)
{
    int a=max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(b==x)
    {
        a=y;
        c=z;
    }
    else
    {
        a=y;
        b=z;
    }
    if(a*a == b*b + c*c)
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
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z))
    {
        cout<<"Pythagorian Triplet"<<endl;
    }
    else
    {
        cout<<"Not a Pythagorian Triplet"<<endl;
    }
    return 0;
}