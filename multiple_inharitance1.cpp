//Multiple inheritance
#include<iostream>
using namespace std;

class Dept_Comp
{
	protected:
		string d_name;
	
	public:	
		void get1(string d_name)
		{
			  this-> d_name=d_name;
		}
};
class Dept_Ele 
{
    protected:	
        int nos_sub;
    public:
         void get2(int nos_sub)
         {
         	   this->nos_sub =nos_sub;
		 }

};

class Dept_Mech 
{

	protected:
	     int nos_staff;
	
	public:     
	     void get3(  int nos_staff)
	     {
	     	 this->nos_staff=nos_staff;
		 }
	
};

class Student : public Dept_Comp,public Dept_Ele,public Dept_Mech
{
	
	   public:
	   	void putData()
	   	{
	   		cout<<"dept name is : "<<d_name<<endl;
	   		cout<<"no of sub studied by student : "<<nos_sub<<endl;
	   		cout<<"no of staff of res dept is : "<<nos_staff<<endl;
		}
};
main()
{
	 Student raj;
	 
	 raj.get1("Computer");
	 raj.get2(45);
	 raj.get3(50);
	 
	 raj.putData();
	 
	 Student deep;
	 
	 deep.get1("Mech");
	 deep.get2(46);
	 deep.get3(45);
	 
	 deep.putData();
} 
