#include<stdio.h>
#include <stdlib.h>
//int arr[100];
//int *p = &arr[0];
//int MaxIndex(int N)
//{
//	int MaxIndex = -1;
//	for(int j=0;j<N;j++)
//	{
//		for(int k=N-1;k>0;k--)
//		{
//			if(*(arr+k)>*(arr+j) && MaxIndex<(k-j))
//				MaxIndex = k - j;
//		}
//	}
//	return MaxIndex;
//}
void MergeSortedArr(int a[], int b[], int* c, int n1, int n2, int n3)
{
	int i1=0,i2=0,i3=0;
	while(i1<n1 && i2<n2)
	{
		if(a[i1]<b[i2])
		{
			c[i3]= a[i1];
			i3++;
			i1++;
		}
		else
		{
			c[i3] = b[i2];
			i3++;
			i2++;
		}
	}
	while(i1<n1)
	{
		c[i3]=a[i1];
	}
	while(i2<n2)
	{
		c[i3]=b[i2];
	}
	printf("The sorted array is ");
	for(int i1 = 0; i1 < n3; i1++)
	{
		printf("%d \t",c[i1]);
	}
}
main()
{
//	int n;
//	printf("Ban muon nhap bn phan tu? \n");
//	scanf("%d",&n);
//	printf("Nhap lan luot cac phan tu \n");
//	for(int i = 0; i<n; i++)
//	{
//		scanf("%d",(p+i));
//	}
//	printf("Cac phan tu la\n");
//	for(int i = 0; i<n; i++)
//	{
//		printf("%d\t",*(p+i));
//	}
//	int tong = 0;
//	for(int i = 0; i<n; i++)
//	{
//		tong = tong + *(p+i);
//	}
//	printf("Tong cac phan tu la %d \n",tong);
//	printf("Khoang cach lon nhat giua k va j trong do a[k]>a[j] la %d",MaxIndex(n));
	
	int a[] = {3,7,9,8};
	int b[] = {1,2,5,6};
	int n1 = sizeof(a)/sizeof(int);
	int n2 = sizeof(b)/sizeof(int);
	int n3 = n1+n2;
	int* Merge = (int*)malloc(n3*sizeof(int));
	MergeSortedArr(a,b,Merge,n1,n2,n3);
	free(Merge);
}

