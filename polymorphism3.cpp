//program for binary operator overloading using normal function

#include<iostream>
using namespace std;
class OpOverloading
{
	public:
	 int  d;
	
	public:
	OpOverloading()  //ram
	{
	   d=10; //rno=8   //a1=10
	        //name=ram	
	}
	OpOverloading(int aa)
	{
		  d =aa; //500
	}
	
	void  operator +(OpOverloading); 
    
}; 
void OpOverloading :: operator +(OpOverloading oo)  //void accept(int a)
    {
    	int result= d + oo.d;
    	cout<<"addtion of 2 objects is : "<<result<<endl;
	}
main()
{
	OpOverloading a1 ; //10calling default cons
	OpOverloading a2(500);
	
	a1 + a2; //int a+b
	
}

