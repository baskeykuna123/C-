#include<iostream>
using namespace std;

class student
{
	public:
	int rno;
	string name;
	double marks;
	void read(int a,string b,double c)
	{
		rno = a;
		name = b;
		marks = c;
	}
	void display()
	{
			cout<<"\n\nDetails of students"<<name<<"is given below:";
			cout<<"\nrno of student is :" <<rno;
			cout<<"\nname of student is :"<<name;
			cout<<"\nmarks of student is :"<<marks;
	}
};

main()
{
	student riya,piya,siya;
	
	riya.read(12,"riya,89.9");
	riya.display();
	piya.read(13,"siya",23.2);
	piya.display();
	siya.read(45,"siya",98.1);
	siya.display();
	
	/*read(12,"riya",89.9);
	cout<<"******Records of RIYA below*******";
	riya.rno=12;
	riya.name="riya";
	riya.marks=89.9;
	
	cout<<"\nrno of student is :" <<riya.rno;
	cout<<"\nname of student is :"<<riya.name;
	cout<<"\nmarks of student is :"<<riya.marks;
	
	cout<<"\n******Records of PIYA below*******";
	
	piya.rno=12;
	piya.name="riya";
	piya.marks=89.9;
	
	cout<<"\nrno of student is :" <<piya.rno;
	cout<<"\nname of student is :"<<piya.name;
	cout<<"\nmarks of student is :"<<piya.marks;
	*/
}
