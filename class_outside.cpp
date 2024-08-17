#include<iostream>
using namespace std;

class student
{
	public:
	int rno;
	string name;
	double marks;
	void read(int a,string b,double c);
	void display();
};

void student::read(int a,string b,double c)
{
		rno = a;
		name = b;
		marks = c;
}
void student::display()
{
			cout<<"\n\nDetails of students "<< name <<" is given below:";
			cout<<"\nrno of student is :" <<rno;
			cout<<"\nname of student is :"<<name;
			cout<<"\nmarks of student is :"<<marks<<endl;
}


main()
{
	student riya,piya,siya;
	
	riya.read(12,"riya",89.9);
	riya.display();
	piya.read(13,"piya",23.2);
	piya.display();
	siya.read(45,"siya",98.1);
	siya.display();
}
