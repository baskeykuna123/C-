#include<iostream>
using namespace std;

class EleDevice  //base class/parent/super/old
{
	 public:
	 	string c_name;
	 	double price;
	 	
	 	void getED(string c_name,double price)
	 	{
	 		   this->c_name=c_name;
	 		   this->price=price;
		 }
		 void putED()
		 {
		 	cout<<"c_name of ED : "<<c_name;
		 	cout<<"\nprice of ED is : "<<price;
		 	
		 }
};
class AC : public EleDevice 
{
	public:
	   string ton;
	   int vlt;
	   
	   void getAC(string c_name,double price, string ton, int vlt)
	 	{
	 		   this->c_name=c_name;
	 		   this->price=price;
	 	    	this->ton=ton;
	 	    	this->vlt=vlt;
		 }
	    void putAC()
		 {
		 	cout<<"\n\nc_name of AC : "<<c_name;
		 	cout<<"\nprice of AC is : "<<price;
		 	cout<<"\nthe ton of ac is : "<<ton;
		 	cout<<"\nvoltage cosume by ac is : "<<vlt;
		 	
		 }
};
class Ductless : public  AC
{
	public:
		bool states;   //true=>on,false=>off
	
	  void getDuct(string c_name,double price, string ton, int vlt,bool states)
	 	{
	 		   this->c_name=c_name;
	 		   this->price=price;
	 	    	this->ton=ton;
	 	    	this->vlt=vlt;
	 	    	this->states=states;
		 }
	    void putDuct()
		 {
		 	cout<<"\n\nc_name of AC : "<<c_name;
		 	cout<<"\nprice of AC is : "<<price;
		 	cout<<"\nthe ton of ac is : "<<ton;
		 	cout<<"\nvoltage cosume by ac is : "<<vlt;
		 	cout<<"\ncurrent state of ac is(true=>on,false=>off) : "<<states;
		 	
		 }
	
};
main()
{
	Ductless d1;
	
	d1.getED("LG",30000.7);
	d1.putED();
	
	d1.getAC("hair",29000.8,"1.5 ton",4);
	d1.putAC();
	
	d1.getDuct("hair",28000.8,"1 ton",3,true);
	d1.putDuct();
}
