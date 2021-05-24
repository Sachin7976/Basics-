 #include<iostream>
 using namespace std;
 int main()
 {
     int number,a,b,i;
     cout<<"enter the range of numbers : \n";
     cin>>a;
     cin>>b;
     for(number=a;number<=b;number++)
     {

         for(i=2;i<number;i++)
         {
             if((number%i)==0)
             {
                 break;
             }
         }
         if(i==number)
         {
            cout<<number<<endl;
         }
     }
     return 0;
 }