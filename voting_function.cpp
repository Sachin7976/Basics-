#include<iostream>
#include<math.h>
using namespace std;
bool voting(int age)
{
    if(age>=18)
    {
      return true ;
    }
    else
    {
        return false;
    }
}
int main()
{
    int age;
    cout<<"Enter age of the voter : ";
    cin>>age;
    if(voting(age))
    {
        cout<<"Eligible for voting "<<endl;
    }
    else
    {
        cout<<"Not-Eligible for voting "<<endl;
    }
    return 0;
}