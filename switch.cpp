#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter a character button(a,b,c,d,e) : ";
    cin>>button;
    switch(button)
    {
        case 'a': cout<<"Hello \n";
        break; 

        case 'b': cout<<"Namaste \n";
        break;

        case 'c': cout<<"Hola \n";
        break;

        case 'd': cout<<"Salut \n";
        break;

        case 'e': cout<<"Ciao \n";
        break;

        default: cout<<"Robot is still learning :/ \n";
    }
    return 0;
}