#include<iostream>
using namespace std;
int sum(int number)
{
    int s=0;
    for(int i=1;i<=number;i++)
    s= s+i;
    return s;
}
int main()
{
    int number;
    cout<<"Enter the number of integers : ";
    cin>>number;
    cout<<"Sum of first "<<number<<" natural numbers : "<<sum(number)<<endl;
    return 0;
}