//Hierarchical inheritance(we have only one base class and multiple der classes
#include<iostream>
using namespace std;

class Shape  //base class/parent/super/old
{
    protected:
       int length=4;
	
	public: 
	  void get1(int l)
	  {
	  	    length=l;
		}  
	   void area()
	   {
	   	  cout<<"\n\narea of shape square is : "<<length*length;
		}
};
class Rect : public Shape
{
	 protected:
	 	int width;
	 
	 public:
	 void get2(int length,int width) //5 3	
	 {
	 	   this->length=length;
	 	   this->width=width;
	 }
	 void rectArea()
	 {
	 	 cout<<"\n\narea of rect is : "<<length*width;
	 }
};'
class Box: public Shape
{
	protected:
	   int height,width1;
	public:
	void get3(int length, int height,int width1)//3 7 2
	{
		    this->length =length;
		    this->height=height;
		    this->width1=width1;
	}
	   void volume()
	{
		cout<<"\n\nthe vol of box is : "<<length*width1*height;
	}
};
main()
{
	Rect r1;
	r1.get1(10);
	r1.area();
	
	r1.get2(5,3);
	r1.rectArea();
	
	Box b1;
	b1.get1(4);
	b1.area();
	
	b1.get3(3,7,2);
	b1.volume();
	
	
}
