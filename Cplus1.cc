#include <iostream> // include <stdio.h>
using namespace std;

namespace ABC{
    int x;
    int setX(int y){x = y; return x;}

}
namespace XYZ{
    int x, y, z; 
    void setX(int i) {x = i; y = 0; z = 0;}
}
using namespace ABC;

int sum(int a, int b){return a+b;}
int sum(int a, int b, int c){return a+b+c;}
double sum(double a, double b){return a+b;}

#define PI 3.14
//user defined class named Circle
class Circle{
    // data members 
private: 
    float r; // radius of the circle
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
		x = xx;
	}
	Circle(const Circle &_c)
	{
		r = _c.r;
	}
    void setRadius(float rr){r = rr;}
    float getRadius(){//printRadius(); 
        return r;}
    float area(){ return PI*r*r;}
    float perimeter(){return 2*PI*r;}
};
// difference between class and struct
// all data members and members functions of struct type are public 
// while in class => limited by label (private, public, protected)
struct sCircle{
    // data members 
    float r; // radius of the circle
    void printRadius(){cout << "printRadius: "<< r << endl;}

    // member functions 
    void setRadius(float rr){r = rr;}
    float getRadius(){//printRadius(); 
        return r;}
    float area(){ return PI*r*r;}
    float perimeter(){return 2*PI*r;}
};
// class Circle{
//     // data members 
// private: 
//     float r; // radius of the circle
//     void printRadius(){cout << "printRadius: "<< r << endl;}
//     // member functions 
// public: 
//     void setRadius(float rr);
//     float getRadius();
//     float area();
//     float perimeter();
// };

// void Circle::setRadius(float rr)
// {
//     r = rr;
// }
// float Circle::getRadius()
// {
//     return r;
// }
// float Circle::area()
// {
//     return PI * r * r;
// }
// float Circle::perimeter()
// {
//     return 2* PI * r;
// }
// float area(float r)
// {
//     return PI * r * r;
// }

int main(void)
{
    //////////////////////////
    // namespace to define functions, variables 
    x = 4;
    setX(20);
    int z = ABC::x;
    cout << "z = " << z << endl; 
    setX(40);
    z = x;
    cout << "z = " << z << endl;  
    
    XYZ::setX(50);
    cout << "x = " << XYZ::x << "y = " << XYZ::y << "z = " << XYZ::z << endl;  
    cout << "Hello" << endl;


    ////////////////////////////
    // dynamic memory allocation  
    int* a = new int; // int* a = (int*)malloc(sizeof(int));
    *a = 4;
    cout << "value that a point to = " << *a << endl;
    int* b = new int[10]; // 
    delete a; 
    delete []b; //malloc - free () <=> new - delete (tranh xin cap phat trong mot vong lap)

    //////////////////
    // overloaded functions 
    int c = sum(2, 5); //int sum(int, int);
    int d = sum(3, 4, 5); //int sum(int, int, int); 
    double e = sum(3.2, 4.5); // double sum(double, double)
    cout << "c = " << c << ", d = " << d << ", e = " << e << endl;

    // handling exception try .. catch : tu xem

    //////////////////////// 
    // class use 
    Circle cc; // declare a variable with type Class Circle 
    cc.setRadius(5.0); // call a method of a class 
    float r = cc.getRadius(); // 
    cout << "r = " << r <<endl;
    float ar = cc.area();
    float pe = cc.perimeter();
    cout << "ar = " << ar << ", pe = " << pe << endl;

    //cc.printRadius(); // error because printRadius is a private function
    Circle c2; 
    cout << "radius of c2 = " << c2.getRadius() << endl;
    c2 = cc; // assigment operator, that copies all data of cc to c2
    cout << "r2 = " << c2.getRadius() << endl;
    Circle* pc2 = &c2;
    float a2 = (*pc2).area(); // access to a function by using pointer
    float p2 = pc2->perimeter(); // using pointer

    sCircle sc; 
    sc.r = 6;
    float asc = sc.area();

    Circle c3(4.5);
    cout << "radius of c3 = " << c3.getRadius() << endl;
	Circle c4(6);
    cout << "radius of c3 = " << c3.getRadius() << endl;
    cout << "Hello world" << endl; //printf("%s\n", "Hello world");
    Circle c6 = c4;
    cout << "radius of c6 = " << c6.getRadius() << endl;
	return 0;
}

