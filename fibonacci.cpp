#include<iostream>
using namespace std;
void fibonacci(int number)
{
    int term1=0;
    int term2=1;
    int nextTerm;
    for(int i=1;i<=number;i++)
    {
        cout<<term1<<endl;
        nextTerm=term1+term2;
        term1=term2;
        term2=nextTerm;
    }
    return ;
}
int main()
{
    int n;
    cout<<"Enter the number of fibonacci terms : ";
    cin>>n;
    fibonacci(n);
    return 0;
}