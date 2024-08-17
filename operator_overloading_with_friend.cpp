//program for binary operator overloading using friend function
  
#include<iostream>
using namespace std;
class OpOverloading
{
	public:
	 int  d;
	
	public:
	OpOverloading(int aa)
	{
		  d =aa; //500
	}
	
  	friend void  operator +(OpOverloading a1,OpOverloading a2); 
    
}; 
void  operator +(OpOverloading a1,OpOverloading a2)  //void accept(int a,int b)
    {
    	int result= a1.d + a2.d;
    	cout<<"addtion of 2 objects is : "<<result<<endl;
	}
main()
{
	OpOverloading a1(56) ; //10 calling default cons
	OpOverloading a2(500);
	
	a1 + a2; //int a+b


	
}
