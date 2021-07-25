#include <iostream> // include <stdio.h>
#include <string.h>
using namespace std;
class Circle{
    // data members 
private: 
    float r,x; // radius of the circle
    void printRadius(){cout << "printRadius: "<< r << endl;}

    // member functions 
public: 
    //Circle(){}; // default constructor
    Circle(){cout << "Default contructor " << endl; r = 0;} //Cirle(){r = 5.0;} 
    Circle(float rr)
	{
		cout << "Parameterized constructor 1:"; 
		r = rr;
	}
	Circle(float rr, float xx)
	{
		cout << "Parameterized constructor 2:"; 
		r = rr;
		//x = xx;
	}
	Circle(const Circle &_c)
	{
		r = _c.r;
	}
	float getRadius(){//printRadius(); 
        return r;}
    friend class Shape;
};
class String
{
	private: 
		char* s;
		int size;
	public:
		String()
		{
			s = NULL;
			size = 0;
		}
		String(const char* str)
		{
			size = strlen(str);
			s = new char[size+1];
			strcpy(s,str);
		}
		String(const String& st)
		{
			size = strlen(st.s); //count the number of characters
			s = new char[size+1]; //allocate the memory 
			strcpy(s,st.s);
		}
		~String()
		{
			cout<<"String destructor"<<endl;
			if(s) delete []s;
		}
		void print()
		{
			cout<<s<<endl;
		}
		void modify(const char* str)
		{
			delete []s;
			size = strlen(str);
			s = new char[size+1];
			strcpy(s, str);
		}
};
class Shape
{
	private:
		float xx;
	public:
		Shape (Circle& c)
		{
			xx = c.r;
		}
}
int main()
{
	Circle c3(4.5);
    cout << "radius of c3 = " << c3.getRadius() << endl;
	Circle c4(6);
    cout << "radius of c3 = " << c3.getRadius() << endl;
    cout << "Hello world" << endl; //printf("%s\n", "Hello world");
    Circle c6 = c4;
    cout << "radius of c6 = " << c6.getRadius() << endl;
    
	String str1("Programming language");
	str1.print();
	String str2 = str1;
	str2.print();
	str1.modify("Data Structure");
	str1.print();
	str2.print();
}

