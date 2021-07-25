#include <iostream>
#include <cstring>
using namespace std;
//1.Write a Complex Fraction
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
//2. Dynamic Array
using namespace std;
class Array
{
	private:
		int *pArr;
		int length;
		int NextIndex;
	public:
		//constructors
		Array()
		{
			int size;
			cout<<"Enter the number of elements in array \n";
			cin>>size;
			pArr = new int[size];
			for(int i=0;i<size;i++)
			{
				pArr[i] = 0;
				length = size;
				NextIndex = 0;
			}	
		}
		void Print()
		{
			cout<<length;
			cout<<"\n";
		}
		//Operator overloading
		Array operator ++(int)
		{
			pArr = new int[length++];
		}
		Array operator --(int)
		{
			pArr = new int[length--];
		}
		Array operator +=(int n) 
		{
			//int n;
			pArr = new int[length=length+n];
		}
		Array operator -=(int n)
		{
			//int n;
			pArr = new int[length=length-n];
		}
};
class String
{
	private: 
		char* str;
	public:
		//default constructor
		String()
		{
			str = new char[1];
			str[0]='\0';
		}
		//parameterized constructor
		String(char* val)
		{
			str = new char[strlen(val)+1];
			strcpy(str,val);
			cout<<"The string is "<<str<<endl;
		}
		//Copy constructor
		String(const String& source)
		{
			str = new char[strlen(source.str)+1];
			strcpy(str,source.str);
		}
		//concat operator+
		String operator+(String& S)
		{
			String S1;
			strcat(str,S.str);
			strcpy(S1.str,str);
			cout<<S1.str;
			return S1;
		}
		//Reverse string
		String Reverse()
		{
			int n = strlen(str) - 1;
			char temp;
			for(int i=0;i<(strlen(str)/2);i++)
			{
				temp = str[i];
				str[i] = str[n];
				str[n] = temp;
				n--;
			}
			cout<<str<<endl;
			return str;
		}
		//get length of string
		int Length()
		{
			return strlen(str);
		}
};
main()
{
	cout<<"Complex Tester \n";
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
	
	cout<<"\n\nArray Tester \n";
	Array arr;
	cout<<"Original size of array is ";
	arr.Print();
	arr++;
	cout<<"New size of array after ++ operator is ";
	arr.Print();
	arr+=2;
	cout<<"New size of array after += 2 operator is ";
	arr.Print();
	
	cout<<"\n\nString tester\n";
	char string1[] = " Hello";
	String s1(string1);
	char string2[] = " it's DTKL";
	String s2(string2);
	String cc;
	cout<<"Concatenation: ";
	cc = s1 + s2;
	char rev[] = " Reverse";
	String Rev(rev);
	cout<<"The reverve of previous string is:  ";
	Rev.Reverse();
	cout<<"Length of previous string is"<<Rev.Length();
}

