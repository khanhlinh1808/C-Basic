//operator to allocate 
//new
//int* a = new int;
//long* c = new long[5];
//float* b = new float(5.23);
////delete 
//delete [] c;
#include <iostream>
using namespace std;
float PI = 3.14;
namespace ABC
{
	int x;
	int setX(int y){x = y; return x;}
}
namespace XYZ
{
	int x,y,z;
	void setX(int i){x = i; y = 0; z = 0;}
}
using namespace ABC;
//ABC::x;
class Circle
{
	private: 
		float r;
		void printRadius()
		{
			cout<<"print R: "<<r<<endl;
		}
	public: 
		//constructor has the same name as the class, doesnt return anything
		Circle(){cout <<"Default constructor "<<endl;r=0;}
		Circle(int rr){cout <<"Parameterized constructor: ";r=rr;}
		void setRadius(float rr);//{r = rr;};
		float getRadius();
//		{
//			return r;	
//		}
		float area()
		{
			return PI*r*r;
		}
		float perimeter()
		{
			return 2*PI*r;
		}
;};
void Circle::setRadius(float rr)
{
	r = rr;
}
float Circle::getRadius()
{
	return r;
}
int main(void)
{
	cout <<"Hello World"<<endl;
	x = 4;
	setX(40);
	int z = ABC::x;
	cout <<"z = "<<z<<endl;
	z = x;
	XYZ::setX(50);
	cout<<"x = "<<XYZ::x<<"y = "<<XYZ::y<<"z = "<<XYZ::z<<endl;
	cout <<"z = "<<z<<endl;
	//class use
	Circle cc;
	cc.setRadius(5.0);
	float r = cc.getRadius();
	cout<<"r = "<<r<<endl;
	float ar = cc.area();
	float pe = cc.perimeter();
	cout<<"ar = "<<ar<<", pe = "<<pe<<endl;
	Circle c2;
	cout << "radius of c2 = " << c2.getRadius() << endl;
	c2 = cc;
	cout << "r2 = " << c2.getRadius()<< endl;
	Circle* pc2 = &c2;
	float p2 = pc2->perimeter();
	return 0;
}

