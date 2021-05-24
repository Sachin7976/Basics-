#include<iostream>
using namespace std;
int binaryToDecimal(int number)
{
    int answer=0;
    int x=1;
    while(number>0)
    {
        int y;
        y = number % 10;
        answer = answer + (x * y);
        x = x * 2;
        number = number / 10;
    }
    return answer;
}
int main()
{
    int number;
    cout<<"Enter Binary Number : ";
    cin>>number;
    cout<<"Decimal Number : "<<binaryToDecimal(number)<<endl;
    return 0;
}