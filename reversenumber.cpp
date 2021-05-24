#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int reverse;
    while(number>0)
    {
     int lastdigit = number % 10;
     reverse = reverse * 10 + lastdigit;
     number= number / 10;

    }
    cout<<"Reverse of the number : "<<reverse<<endl;
    return 0;

}