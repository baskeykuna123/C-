#include<iostream>
using namespace std;

class Stud   //1st base class
{
	public:
	int rno;
	string name;
	
	void getInfo()
	{
		cout<<"\nEnter rno and name of student : ";
		cin>>rno>>name;
	}
	
	void dispInfo()
	{
		cout<<"rno of stud : "<<rno<<endl;
        cout<<"name of stud : "<<name<<endl<<endl;
	}
};
class Marks : public Stud   //1st derived class
{
	 public:
	 	double math,sci;
	 	
	 	void getMarks()
	 	{
	 		cout<<"\n\nEnter the marks of math and sci : ";
	 		cin>>math>>sci;
		 }
	 	
	 void dispMarks()
	 {
	 	cout<<"the of math n sci is : "<<math<<" "<<sci<<endl<<endl;
     }	
 };
 
class Sports    //2nd base cls
 {
 	public: 
 	string s_name;
	string s_type;
	int s_marks;
	
	void getSportInfo()
	{
		cout<<"\n\nEnter the details of sport like name,type,marks : ";
		cin>>s_name>>s_type>>s_marks;
	}
 	 
 	 void dispType()
 	 {
 	 	 cout<<"the sport name is : "<<s_name<<endl;
 	 	 cout<<"the sport type is : "<<s_type<<endl<<endl;
	  }
 };
 
class Result : public Marks,public Sports
 {      
 	    
 	    public:
 	    void dispAvg()
 	    {
 	    	 double  avg= ((math+sci+s_marks)/3);
 	    	   cout<<"the result of student is : "<<avg<<endl<<endl;
		 }
 	
 };
 
main()
 {
 	Result r11;
 	

   r11.getInfo();
       r11.dispInfo();
	

  r11.getMarks();
        r11.dispMarks();
    
       
 	  r11.getSportInfo();
	 r11.dispType();
    
        r11.dispAvg();   ////data of result cls
}

