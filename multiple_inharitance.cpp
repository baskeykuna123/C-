#include<iostream>
using namespace std;
class EleDevice
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
			cout<<"c_name of AC is:"<<c_name;
			cout<<"\nprice of AC is :"<<price;
		}
		
};
class AC:public EleDevice
{
	public:
		string ton;
		int vlt;
		void getAC(string c_name,double price,string ton,int vlt)
		{
			this->c_name=c_name;
			this->price=price;
			this->ton=ton;
			this->vlt=vlt;
		}
		void putAC()
		{
			cout<<"\nc_name of AC is:"<<c_name;
			cout<<"\nprice of AC is :"<<price;
			cout<<"\nton of AC is:"<<ton;
			cout<<"\nvlt of AC is :"<<vlt;
		}
};
class Ductless : public AC
{
	public:
		bool state;//true ,false
		void getDuct(string c_name,double price,string ton,int vlt,bool state)
		{
			this->c_name=c_name;
			this->price=price;
			this->ton=ton;
			this->vlt;
			this->state;
		}
		void putDuct()
		{
			cout<<"\nc_name of AC is:"<<c_name;
			cout<<"\nprice of AC is :"<<price;
			cout<<"\nton of AC is:"<<ton;
			cout<<"\nvlt of AC is :"<<vlt;
			cout<<"\nState of AC is:"<<state;	
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
