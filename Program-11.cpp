#include<iostream>
using namespace std;
int x = 5;     
int &test();
int main()
{
    cout<<"220130318102"<<endl;
	  cout<<"My Name Is Krinshsmith Kava"<<endl;
    test()=15;
    cout<<test();
    return 0;
}
int &test()
{
    return x;
}
