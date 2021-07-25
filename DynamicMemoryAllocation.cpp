#include<stdio.h>
#include<stdlib.h>
#define N 10
main()
{
	//void *p = (char*) malloc(10); //number of bytes = 10 =>  p is pointer to memory address 
	//char *p = (char*) malloc(10);
	printf("The array by dynamic allocation \n");
	int* p = (int*) malloc(10 * sizeof(int)); //xin bo nho de cap phat cho 10 so nguyen => mang dong
	for(int i = 0; i<10;i++)
	{
		*(p+i) = i;
		printf("%d\t",*(p+i));
	}
	int* p1 = (int*)calloc(10,sizeof(int));
	printf("The array by calloc: \n"); //initialize all element = 0
	for(int ii = 0; ii<10;ii++)
	{
		printf("%d\t",*(p1+ii));
	}
//	//using realloc
	printf("The array by realloc \n");
	if(p1)
	{
		p1 = (int*)realloc(p1, 5*sizeof(int));
		for(int iii=10;iii<15;iii++)
		{
			*(p1+iii)=iii;
		}
		for(int iii=0;iii<15;iii++)
		{
			printf("%d\t",*(p1+iii));
		}
		free(p1);	//to release memory allocated by calloc, malloc, realloc
	}
	free(p);
	function pointer
	void fun(int a)
	{
		printf("Value of a is %d \n",a);
	}
	int sum(int a, int b)
	{
		return a+b;
	}
	main()
	{
		void (*fun_ptr)(int)= &fun; //fun_ptr is a pointer to fun()
		int (*ptr2)(int,int) = &sum;
		printf("%d \n",(*ptr2)(3,4));
		(*fun_ptr)(10);
	}
}
//Function
int add(int, int);
int sub(int, int);
void display(int);
void swap(int*,int*);
struct Student
{
	char name[N];
	char ID[N];
	float score;
};
int maxArr(int arr[], int n)
{
	int t = arr[0];
	for(int i = 1;i<n;i++)
	{
		if(t < arr[i]) t = arr[i];
	}
	return t;
}
main()
{
	int a = 5, b = 6;
	int c = add(a,b);
	display(c);
	//display(add(a,b));
	display(sub(a,b));
	int arr[]={3,2,5,10,220,21};
	int n = sizeof(arr)/sizeof(int);
	int maxval = maxArr(arr, n);
	display(maxval);
}
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
void display(int i)
{
	printf("Value of i = %d \n",i);
}
//void swap(int* a, int* b)
//{
//}
