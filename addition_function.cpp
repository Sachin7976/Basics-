#include<iostream>
using namespace std;
int add(int number1,int number2)
{
    int sum;
    sum=number1+number2;
    return sum;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Additon of the numbers : "<<add(a,b)<<endl;
    return 0;
}