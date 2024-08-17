//Prog for encapsulation
#include<iostream>
using  namespace std;
class Emp
{
  private:	
	string loginid;
	string pass;
	double sal;
	
	public:
	void setLoginid(string loginid)
	{
		this->loginid =loginid;
	}
	string   getLoginid()
	{
	      return  loginid;	
	}
	
	void  setPass(string pass)
	{
		   this->pass =pass;  
	}
	  string   getPass()
	 {
		  return pass; 	
	}	
	
	 void    setSal(double sal)	
	 {
	 	    this->sal =sal;
	 }
	  double  getSal()
	  {
	  	   return sal;
	  }
		
};
main()
{
    Emp e1;
   // e1.read(,,4623.32);
   
   e1.setLoginid("xyz@gmail.com");
   cout<<"\nlogin id of emp is : "<<e1.getLoginid();
   
   e1.setPass("3533sgas^%");
   cout<<"\nPass of emp is : "<<e1.getPass();
   
   e1.setSal(4623.32);
   cout<<"\nsal of emp is : "<<e1.getSal();
   
    
  
    
}
