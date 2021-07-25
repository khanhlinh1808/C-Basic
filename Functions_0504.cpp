#include<stdio.h>
//float sum(float m, float n);
//main()
//{
//	float a,b,c;
//	printf("Enter 2 numbers \n");
//	scanf("%f %f",&a,&b);
//	c = sum(a,b);
//	printf("Sum of 2 numbers is %f + %f = %f",a,b,c);
//}
//float sum(float m, float n)
//{
//	return m+n;
//}
//ham tim max cua mang
//int max(int arr[], int n)
//{
//	int max = arr[0];
//	for(int i = 0; i<n;i++)
//	{
//		if (max < arr[i]) max = arr[i];
//	}
//	return max;
//}
//int max(int *arr, int n)
//{
//	int max = *arr;
//	for(int i = 0; i<n;i++)
//	{
//		if (max < *(arr+i)) max = *(arr+i);
//	}
//	return max;
//}
int sum(int *m, int *n)
{
	return *m+*n;
}
void copy(int *a,int *b, int n)
{
	if(a == NULL || b == NULL || a == b || n ==0)
	return;
	for(;n>0;n--)
		*a++ = *b++;
}
//recursive function
unsigned int giai_thua(unsigned int n)
{
	if(n<=1) return 1;
	return n * giai_thua(n-1);
}
//using recursive function to find max value
int Max(int arr[], int m, int n)
{
    int max;
    if (m == n)
        return arr[m];
    else
    {
        max = Max(arr, m + 1, n);
        if (arr[m] >= max)
            return arr[m];
        else
            return max;
    }
}
//Macro 
#define MIN(x,y) x<y ? x:y
int z = MIN(2,4);
main()
{
	int a[3]={1,2,3};
	int giatri = Max(a,0,2);
	printf("GTLN cua mang la %d \n",giatri);
	//printf("%d",giai_thua(3));
	printf("%d",z);
}

