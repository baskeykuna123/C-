//1.fun overloading by changing the no of argu
#include<iostream>
using namespace std;

class FunOverloading
{
	public:
		void add()
		{
			cout<<"\nempty method: ";
		}
		void add(int a,double b)	
		{
			cout<<"\n\noutput of add(int a,int b) : "<<a+b;
			
		}
		void add(int a,int b)
		{
		    cout<<"\n\noutput of add(int a,int b,int c) :"<<a+b;	
		}
		void add(double a,double b)
		{
			cout<<"\n\noutput of add(int a,int b,int c,int d) :"<<a+b;
		}
};
main()
{
   FunOverloading f1;
     f1.add(3.4,4.1);//fun calling will gets match with fun definition
                  //at a complitime of the prog,thats why this poly is called as c-t-poly
     f1.add(3,6.1);
     f1.add();
     f1.add(7,5);
 }

