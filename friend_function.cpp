#include<iostream>
using namespace std;
class Emp
{
	private: 
	 string loginid;
	 string pass;
	 
	 public:
	 Emp(string loginid,string pass)
	 {
	 	this-> loginid  =loginid;
	 	this->pass=pass;       
	 }
	 public: //or private
     friend	void disp(Emp obj);
	 
};
	void  disp(Emp  obj )
	{
	 	cout<<"login id of emp is : "<<obj.loginid;
	 	cout<<"\nPAss of emp is : "<<obj.pass;
		 }
main()
{
     Emp ram("rr@sevenmntor.com","1213^74qqw");	
     
	 disp(ram);
	 //disp(e2);
	 
}
	
