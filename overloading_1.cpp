#include<iostream>
using namespace std;
//1.Function Overloading=>function  having same name but DIFFERENT paramter list
//2.Function Overriding=> function having same name and SAME  paramter list
class FunOverriding
{
	public:
		
	virtual	void show()
		{
			cout<<"\nin base class show... ";
		}
};
class SubFunOverriding : public  FunOverriding
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
	
	FunOverriding *f; //*f is the pointer of base class
	f= &s1;
	
	f->show();	 //base class pointer should always execute base classmethod
	//noramlly, with the pinter of base calss the base class fun should
	//always execute,but if you want to execute derived class fun with pointer
	//of base class then you will need to make the base class fun as a virtual fun
}

