#include <iostream>
using namespace std;
//1.Write a class Fraction
//class Fraction
//{
//	private:
//		int a,b;
//		//float fraction = static_cast<float>a/b;
//	public: 
//		//default construction
//		Fraction()
//		{
//			a = 0; b = 1;
//		}
//		//copy construction
//		Fraction(Fraction &f)
//		{
//			f.a = a;
//			f.b = b;
//		}
//		//parameterized construction
//		Fraction(int x, int y)
//		{
//			a = x;
//			b = y;
//		}
//		//destructors
//		~Fraction()
//		{
//			;
//		}
//		//operator overloading
//		Fraction operator+ (Fraction const &fr)const
//		{
//         	Fraction Fr_result;
//         	Fr_result.a = (a*fr.b)+(fr.a*b);
//         	Fr_result.b = (b*fr.b);
//         	return Fr_result;
//    	}
//    	Fraction operator - (Fraction const &fr)const 
//		{
//         	Fraction Fr_result1;
//         	Fr_result1.a = (a*fr.b)-(fr.a*b);
//         	Fr_result1.b = (b*fr.b);
//         	return Fr_result1;
//    	}
//    	void GetFraction()
//    	{
//    		do
//    		{
//    			cout<<"Enter the numerator and denominator"<<endl;
//    			cin >> a;
//    			cin >> b;
//			}while(b==0);
//		}
//		void ShowFraction()
//		{
//			cout<<a<<"/"<<b;
//		}
//;
//};
//int main()
//{
//	// These declarations use the default constructor
//	Fraction f1,f2;
//	// These declarations use the constructor with parameters
//	Fraction f3(3,4);
//	cout<<"\n"<<"Value of f1 is";
//	f1.ShowFraction();
//	cout<<"\n"<<"Value of f3 is";
//	f3.ShowFraction();
//	cout<<"\nPlease enter your 1st fraction\n";
//	f1.GetFraction();
//	f1.ShowFraction();
//	cout<<"\nPlease enter your 2nd fraction\n";
//	f2.GetFraction();
//	f2.ShowFraction();
//	cout<<"Sum of the 1st and 2nd fraction is \n";
//	Fraction result;
//	result = f1 + f2;
//	result.ShowFraction();
//	cout<<" of the 1st and 2nd fraction is \n";
//	Fraction result;
//	result = f1 + f2;
//	result.ShowFraction();
//	return 0;
//}
//2.Write a Complex Fraction
class Complex
{
	private:
		int real;
		int imag;
	public:
		//3 types of constructors
		Complex()
		{
			real = 0;
			imag = 0;
		}
		Complex(int a, int b)
		{
			real = a;
			imag = b;
		}
		Complex(Complex &comp)
		{
			comp.real = real;
			comp.imag = imag;
		}
		//destructors
//		Complex ~Complex
//		{
//			;
//		}
		//operator overloading
		Complex operator + (Complex &complex)
		{
			Complex result;
			result.real = complex.real + real;
			result.imag = complex.imag + imag;
			return result;
		}
		void ShowComplex()
		{
			cout<<real;cout<<"+";cout<<imag;cout<<"i";
		}
		void GetComplex()
		{
			cout<<"\n Please enter the value of real & imag number";
			cin>>real;
			cin>>imag;
		}
};
int main()
{
	Complex c1,c2;
	Complex c3(2,1);
	cout<<"\nValue of c1 is ";
	c1.ShowComplex();
	cout<<"\nValue of c3 is ";
	c3.ShowComplex();
	cout<<"\nPlease enter the value of c1: ";
	c1.GetComplex();
	c1.ShowComplex();
	cout<<"\nPlease enter the value of c2: ";
	c2.GetComplex();
	c2.ShowComplex();
	cout<<"\nSum of c1 and c2 is ";
	Complex sum;
	sum = c1 + c2;
	sum.ShowComplex();
	return 0;
}
//3.Class of 1D arrays 
//class Array
//{
//	private: 
//		int *pArr;
//		int length;
//		int NextIndex;
//	public: 
//		//Constructor to create a dynamic array with a certain size
//		Array()
//		{
//			int size;
//			cout<<"Please enter the size of array \n";
//			cin>>size;
//			pArr = new int[size];
//			for(int i=0;i<size;i++)
//			{
//				pArr[i]=0;
//				length = size;
//				NextIndex = 0;
//			}
//		}
//		void PrintSize()
//		{
//			cout<<length;
//		};
//		//Operator overloading
//		Array operator ++(int)
//		{
//			pArr = new int[length++];
//		};
//		Array operator --(int)
//		{
//			pArr = new int[length--];
//		};
//		Array operator +=(int n)
//		{
//			length = length + n;
//			pArr = new int[length];
//		};
//		Array operator -=(int n)
//		{
//			length = length - n;
//			pArr = new int[length];
//		};
//};
//int main()
//{
//	Array arr;
//	cout<<"\nOriginal size of Array is ";
//	arr.PrintSize();
//	arr++;
//	cout<<"\nNew size of Array after ++ operator is ";
//	arr.PrintSize();
//	arr+=3;
//	cout<<"\nNew size of Array after += n operator is ";
//	arr.PrintSize();
//	return 0;
//}
