#include<stdio.h>
#include<string.h>
main()
{
	int a = 8;
	int i = 5;
	int *p = &a;
	//int j = *&a;
	//assignment
	int *q;
	q = &i;
	int j = *q;
	int k = *&i;
	//q = NULL;
	printf("%d \t",*p);
	printf("%d \t",j);
	printf("%d \t",q); //address of i 
	printf("%p \t",q);
	printf("%d \t",k);
//void pointer
	void *pVoid;
//non - type casting 
	//pVoid = &i;
	//printf("%d",*pVoid); error 
//type casting
	//printf("%d",*(int*)pVoid);
	char c = 'm';
	pVoid = &c;
	printf("%c \t",*(char*)pVoid);
	printf("%d \t",p--);
//array & pointer
	int arr[]={1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	int *pointer = &n;
	//int *p;
	//arr= p; //wrong 
	pointer = arr;
	printf("1st element is %d",*arr); //~arr[0]
	for(int id = 0; id <n; id++)
	{
		printf("arr[%d] = \n",*(arr+id));
		//printf("arr[%d] = \n",*(arr++));
		//printf("arr[%d] = \n",arr[id]);
	}
//negative index in pointer
	int *pp = &n;
	pp = arr+2;
	pp[-1]= 10;
	printf("%d",pp[-1]);	
//string 
	char string[10]="Linh";
	char name1[]={'L','i','n','h','\0'};
	char name2[10]={'L','i','n','h','\0'};
	printf("\n \nSize of name1 = %d",sizeof(name1));
	printf("\n \nSize of name2 = %d",sizeof(name2));
	printf("\n\nName 1 is ");
	for(int k = 0; k<strlen(name1);k++)
	{
		printf("%c",name1[k]);
	}
}

