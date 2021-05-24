#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int sum=0;
    int original_number=number;
    while(number>0)
    {
         int lastdigit=number % 10;
         sum+=pow(lastdigit,3);
         number=number/10;
    }
    if(sum==original_number)
    {
        cout<<"Armstrong number "<<endl;
    }
    else
    {
        cout<<"Not a Armstrong number "<<endl;
    }
    return 0;
    
}