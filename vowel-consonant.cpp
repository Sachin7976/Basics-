#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    int isLowercaseVowel,isUppercaseVowel;
    cout<<"enter a alphabet : \n";
    cin>>alphabet;
    
    isLowercaseVowel=(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u');

    isUppercaseVowel=(alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U');

    if(isLowercaseVowel||isUppercaseVowel)
    {
        cout<<alphabet<<" is a vowel \n";
    }
    else
    {
        cout<<alphabet<<" is a consonant \n";
    }
    return 0;
}
