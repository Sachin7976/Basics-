#include<iostream>
using namespace std;
int fact(int number)
{
 int factorial=1;
 for(int i=1;i<=number;i++)
 {
     factorial=factorial*i;
 }
 return factorial;
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<fact(num)<<endl;
    return 0;
}
