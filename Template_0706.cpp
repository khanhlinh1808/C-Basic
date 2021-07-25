#include<iostream>
class Complex{
private: 
    float real, image; 
public: 
    Complex(){real = 0; image = 0;}
    Complex(float r, float i){real = r; image = i;}
    void print()const { cout << real << "+" << "j*" << image << endl;}

    Complex operator+(Complex b){Complex c; c.real = real + b.real; c.image = image + b.image; return c;}
    Complex operator-(Complex b){Complex c; c.real = real - b.real; c.image = image - b.image; return c;}
    Complex operator=(Complex b){real = b.real; image = b.image; return *this;}
    

    friend ostream& operator<<(ostream& o, Complex& b);
    friend istream& operator>>(istream& i, Complex& b);
};
using namespace std;
template <class T>
int compare(T x, T y)
{
	if(x==y) return 1;
	else return 0;
}
template <class T>
void swap(T* x, T* y)
{
	T z = *x;
	*x = *y;
	*y = z;
}
T biggestNumber(T a, T b)
{
	if (a>=b) return a;
	else return b;
}
template <class T>
T biggestNumber(T a, T b, T c)
{
	T d = biggestNumber(a, b);
	return biggestNumber(d,c);
}
template <class T>
T Biggest (Complex c1, Complex c2)

{

    If ((c1.real*c1.real + c1.image*c1.image) > (c2.real*c2.real + c2.image*c2.image)) return c1;

    else return c2;

}
template <class Container, class Object>
void push(Container& s, Object o)
{
	cout << "Push o into the containers s" << endl;
}
template <class T>
class Array{
	private: 
		int n;
		T* p;
	public:
		Array(){n = 0; p = NULL;} //default constructor
		Array(int nn){n = nn; p = new T[n];}
		~Array(){}
		
}
template <class T, int n>
class Array{
	private: 
		T p[n];
	public:
		Array()
		
		int getSize(){return n};
};
void Array<T>::printArray()
{}

template <class T, int n>
T* createObject()
{
	T* arr = new T[n];
	return arr;
}
int main()
{
	int a = compare(3, 4);
	int a = compare<int>(3,4);
	cout << "a = " << a << endl;
	float b = 5.6; float c = 3.4;
	swap(&b, &c);
	swap<float>(&b, &c);
	int e = 3; int f = 5;
	cout << "b = " << b << ", c = " << c << endl;
	swap(&e, &f);
	cout << "e = " << e << ", f = " << f << endl;
	push<List, int>(11,4);
	
	int k = biggestNumber(3,4,5);
	cout << "k = " << k << endl;
	
	int arr[] = {3,2,1};
	int n = sizeof(arr)/sizeof(int);
	int m = biggestNumber(arr, n);
	cout<<"m = "<< m << endl;
	
	int l = 6;
	float* arr4 = createObject<float,6>();
	Complex c1(3,4);
	return 0;
}
