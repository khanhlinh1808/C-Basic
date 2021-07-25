#include <iostream>
using namespace std;
//abstract class (at least 1 virtual function)
class point2D
{
	//private:
	protected:
		int x,y;
	public:
		point2D()
		{
			x = 0;
			y = 0;
		}
		point2D(int xx, int yy)
		{
			x = xx;
			y = yy;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
		void display()
		{
			cout<<x<<","<<y;
		}
		void move(int dx, int dy)
		{
			x +=dx;
			y +=dy;
		}
		virtual void display()
		{
			cout<< x << "," << y;
		}
		virtual void coloring() = 0;
};
class point3D: public point2D
{
	private: 
		int z;
	public: 
		point3D():point2D()
		{
			z = 0;
		}
		point3D(int xx, int yy, int zz):point2D(xx, yy){z = zz;}
		int getZ()
		{
			return z;
		}
		void display()
		{
			point2D::display();
			cout <<","<< z;
		}
		void move(int dx, int dy, int dz)
		{
			x +=dx;
			y +=dy;
			z +=dz;
		}
		
};
int main()
{
	//when a class is ABSTRACT => can't create a new instance
	point2D* p2p; //can use pointer
	point2D p2(10,20);
	cout<<"Point2D:";
	p2.display();
	cout<<"\nPoint3D:"; //x,y,display
	point3D p3;
	p3.display();
	cout<<"\nPoint3D p31:"; 
	point3D p31(2,3,4);
	p31.display();
	cout<<"\n";
	cout<<"p3.z= "<< p3.getZ() <<endl;
	point2D pp = p3; //Casting
	cout<<"\nAfter casting: ";
	pp.display();
	
	point2D* p2d = &p2;
	cout<<"\nPoint2D by pointer: ";
	p2d->display();
	p2d = &p31;
	cout<<"\n2nd call display by pointer: ";
	p2d->display();
	return 0;
}
//Code written by Do Thi Khanh Linh, with instruction of Ms. Thanh Hai 
//Class of Programming Language, Inheritance_31052020
