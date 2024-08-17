#include<iostream>
using namespace std;
//1.Function Overloading=>function  having same name but DIFFERENT paramter list
//2.Function Overriding=> function having same name and SAME  paramter list
class FunOverriding
{
	public:
		
		void show()
		{
			cout<<"\nin base class show... ";
		}
};
class SubFunOverriding     : public  FunOverriding
{
	public:
	void show()
		{
			cout<<"\nin derived class show...";
		}
};
main()
{
	SubFunOverriding s1;
	s1.show();
	s1.show();
}

