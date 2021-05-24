#include<iostream>

using namespace std;

void run()
{
	cout<<" run is running "<<endl;
}
void run(int a)
{
	cout<<"please enter a number : ";
	cin>>a;
	cout<<" run is running with number "<<a<<endl;
}
void run(char c)
{
	cout<<"please enter a character : ";
	cin>>c;
	cout<<" run is running with character "<<c<<endl;
}
int main()
{
	int a;
	char c;
	run();
	run(a);
	run(c);
	return 0;
}
