#include<iostream>
using namespace std;
class Complex
{
	private: 
		float real,image;
	public: 
		Complex()
		{
			real = 0;
			image = 0;
		}
		Complex(float r, float i)
		{
			real - r; image = i;
		}
		void print() const
		{
			cout<< real << "+" << "j*" <<image <<endl;			
		}
		Complex operator+(Complex b)
		{
			Complex c;
			c.real = real + b.real;
			c.image = image + b.image;
		}
		Complex operator-(Complex b)
		{
			Complex c;
			c.real = real - b.real;
			c.image = image - b.image;
		}
		Complex operator=(Complex b)
		{
			Complex c;
			real = b.real;
			image = b.image;
			return *this;
		}
		friend ostream& operator<< (ostream& o, Complex& b);
		friend istream& operator>> (istream& i, Complex& b);				
}
ostream& operator<<(ostream& o, Complex& b)
{
	o<<b.real<<"+"<<"j*"<<b.image;
	return o;
}
istream& operator>>(istream& i, Complex& b)
{
	cout<< "Real: ";
	i >> b.real;
	cout<< "Image: ";
	i >> b.image;
	return i;
}
int main()
{
	Complex a(3,4);
	Complex b(5,6);
	a.print();
	b.print();
	
	Complex c;
	c = a + b;
	c.print();
	
	c = a - b;
	
	Complex d;
	d.print();
	d = a;
	Complex e = d; //copy constructor, not assignment
	e.print();
	
	cout<<e; 	//operator<<(e)
	Complex f; 	
	cin>>f;		//operator>>(f)
	cout<<f;
}
