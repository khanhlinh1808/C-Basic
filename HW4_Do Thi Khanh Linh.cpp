#include<stdio.h>
//1.Given an array A, find the maximum difference between two indexes (j-i) so that A[j] > A[i] using pointer
int maxDifferent(int arr[], int n)
{
	int max = -1;
	for(int i=0;i<n;i++)
	{
		for(int j = n-1;j>i;j--)
		{
			if(*(arr+j)>*(arr+i) && max<(j-i)) max = j-i;
		}
	}
	return max;	
}
void NhapMang(int arr[], int n)
{
	printf("Nhap lan luot cac phan tu cua mang \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr+i);	
	}
}                                                       
void InMang(int arr[], int n)
{
	printf("Cac phan tu cua mang la\n");
	for(int i=0;i<n;i++)
	{
		printf("%d \t",*(arr+i));	
	}
}
main()
{
	int n;
	printf("Nhap so phan tu cua mang \n");
	scanf("%d",&n);
	int arr[n];
	NhapMang(arr,n);
	InMang(arr,n);
	//int n = sizeof(arr)/sizeof(int);
	printf("Ket qua la %d",maxDifferent(arr, n));
}
//2. merges two sorted arrays a and b to make a sorted array c using pointer
#include <stdio.h>
void merge(int a[], int m, int b[], int n, int sorted[]) {
  int i, j, k;
  j = k = 0;
  for (i = 0; i < m + n;) 
  {
    if (j < m && k < n) 
	{
      if (*(a+j) < *(b+k)) 
	  {
        *(sorted+i) = *(a+j);
        j++;
      }
      else 
	  {
        *(sorted+i) = *(b+k);
        k++;
      }
      i++;
    }
    else if (j == m) 
	{
      while(i < m + n) 
	  {
    	*(sorted+i) = *(b+k);
        k++;
        i++;
      }
    }
    else {
      while(i < m + n) {
    	*(sorted+i) = *(a+j);
        j++;
        i++;
      }
    }
  }
}

int main() {
  int a[4] = {1,2,3,5};
  int b[3] = {4,15,16};
  int sorted[200],i;
  merge(a, 4, b, 3, sorted);
  printf("Sorted array:\n");
  for (i = 0; i < 7; i++) {
    printf("%d\n", sorted[i]);
  }
  return 0;
}
//3. Max min in array & their position
void Max(int a[],int m)
{
	int max_pos = 0;
	int max = *a;
	for(int i=0;i<m;i++)
	{
		if(max<*(a+i))
		{
			max = *(a+i);
			max_pos = i;
		}
	}
	printf("Max value is %d and their position is %d \n\n",max,max_pos+1);
}
void Min(int a[],int m)
{
	int min_pos = 0;
	int min = *a;
	for(int i=0;i<m;i++)
	{
		if(min>*(a+i))
		{
			min = *(a+i);
			min_pos = i;
		}
	}
	printf("Min value is %d and their position is %d \n",min,min_pos+1);
}
main()
{
	int arr[3]={11,12,13};
	Max(arr,3);
	Min(arr,3);
}
