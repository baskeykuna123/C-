#include<iostream>
using namespace std;

class Emp
{
	public:
		int id;
		string name;
		double salary;
		void accept(int a,string b,double c)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display()
		{
			cout<<"\nId of employ is :"<<id;
			cout<<"\nName off employ is :"<<name;
			cout<<"\nsalary of employ is :"<<salary;
			cout<<"\nAddress of object"<<name<<"is"<<this;
		}
};
main()
{
	Emp ram,shyam;
	ram.accept(101,"ram",1200);
	ram.display();
	shyam.accept(102,"shyam",1200);
	shyam.display();
}
