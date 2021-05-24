#include<iostream>
using namespace std;
int main()
{
    int side_a,side_b,side_c;
    cout<<"enter the three sides of triangle : \n";
    cin>>side_a;
    cin>>side_b;
    cin>>side_c;
    if((side_a==side_b)&&(side_b==side_c))
    {
        cout<<"It is an Equilateral Triangle \n";
    }
    else if((side_a==side_b)||(side_b==side_c)||(side_c==side_a))
    {
        cout<<"It is an Isoscales Triangle \n";
    }
    else
    {
        cout<<"It is an Scalene Triangle \n";
    }
    return 0;
}