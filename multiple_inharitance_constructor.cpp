//Multiple inheritance using constructor
#include<iostream>
using namespace std;

class Dept_Comp
{
	protected:
		string d_name;
	
	
};
class Dept_Ele 
{
    protected:	
        int nos_sub;
    

};
class Dept_Mech 
{

	protected:
	     int nos_staff;
	
	
};
class Student : public Dept_Comp,public Dept_Ele,public Dept_Mech
{
	
    public:
    	Student(string d_name, int nos_sub, int nos_staff)
    	{
    		  this->d_name  =d_name;
    		  this->nos_sub=nos_sub;
    		  this->nos_staff=nos_staff;
		}
    	
	   	void putData()
	   	{
	   		cout<<"dept name is : "<<d_name<<endl;
	   		cout<<"no of sub studied by student : "<<nos_sub<<endl;
	   		cout<<"no of staff of res dept is : "<<nos_staff<<endl;
		}
};
main()
{
	 Student raj("Computer",45,500);

	 
	 raj.putData();
	 
	 Student deep("Mech",40,100);
	 
	
	 
	 
	 deep.putData();
} 

