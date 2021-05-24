#include<iostream>
#include<string>


using namespace std;

class laptop
{
	public:
	string laptopName;
	string laptopBrand;
	float laptopPrice;
	string laptopProcessor;
	void getdata()
	{
		cout<<"please enter details of the laptop : "<<endl;
		cout<<"enter name : ";
		cin>>laptopName;
		cout<<"enter brand : ";
		cin>>laptopBrand;
		cout<<"enter price : ";
		cin>>laptopPrice;
		cout<<"enter processor : ";
		cin>>laptopProcessor;
	}
	void showdata()
	{
		cout<<"Details of the laptop are as follows :- "<<endl;
		cout<<"Name : "<<laptopName<<endl;
		cout<<"Brand : "<<laptopBrand<<endl;
		cout<<"Price : "<<laptopPrice<<endl;
		cout<<"Processor : "<<laptopProcessor<<endl;
	}
	void startup()
	{
		cout<<laptopName<<" laptop has started. "<<endl;
	}
	void shutdown()
	{
		cout<<laptopName<<" laptop is shutting down. "<<endl;
	}
};
int main()
{
	laptop laptop1;
	laptop1.startup();
	laptop1.getdata();
	laptop1.showdata();
	laptop1.shutdown();
	return 0;
}
