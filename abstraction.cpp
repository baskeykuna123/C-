#include<iostream>
using namespace std;

class BaseApp
{
	
	public:
		void read()  //concret method
		{
			cout<<"\n\nin read...";
		}
		void disp()
		{
			cout<<"\n\nin disp...";
		}
	virtual	void show()=0;  //pure virtual fun
	virtual	void put()=0;
};

 class DerApp : public  BaseApp
{
	 public:
	  void put()
		{
			 cout<<"\n\nin put method..";
		}
		
		
};
class SubApp : public DerApp
{
	public:
	void show()
	{
		cout<<"\n\nin show()...";
	}
	
	void f1()
	{
		cout<<"in f1...";
	}
	  	
};
main()
{
	SubApp s1;
	//s1.show();
//	s1.put();
	
	//s1.read();
	//s1.disp();
	//s1.f1();
	
  BaseApp *b1;
	b1=&s1;
	
	b1->show();
	b1->put();
	b1->read();
	b1->disp();
//	b1->f1(); //you can't access the f1() fun by using the pointer of base 
           //abstract class bcz its not the member of abs class,
           //its the fun of non abs class SubApp

	
	
}

