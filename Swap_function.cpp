#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
return ;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Numbers before swap : "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"Numbers after swap : "<<a<<" "<<b<<endl;
    return 0;
}