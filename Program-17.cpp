#include<iostream>
using namespace std;
class addition{
	public:
		int sum(int a,int b)
		{
			return a+b;
		}
		int sum(int a,int b,int c)
		{
			return a+b+c;
		}
};
int  main()
{	cout<<"My Name Is Krinshsmith Kava"<<endl;
	cout<<"220130318102"<<endl;
	addition obj;
	cout<<obj.sum(20,15)<<endl;
	cout<<obj.sum(81,100);
	return 0;
}
