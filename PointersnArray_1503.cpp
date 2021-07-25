#include<stdio.h>
#define N 10
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[N];
	int d[5];
	//int c[];
	int sum = 0;
	for(int i=0;i<10;i++)
	{
		//a[i] = i;
		//scanf("%d",&a[i]);
		printf("%d\t\n",a[i]);
	}
	//count the sum of all elements of the array a:
	for(int i=0;i<10;i++)
	{
		sum = sum + a[i];
	}	
	//compute the product of all elements of array.
	int n=5, m=5;
    long long P = 1;
    int A[N][N];
 
    for(int i = 0; i < n;i++)
        for(int j = 0; j < m;j++) A[i][j] = n;
    for(int i =0;i<n;i++) for(int j = 0;j<m;j++) P *= A[i][j];
    printf("Product of all elements = %lld\n", P);

	//product of 2 matrix
		int a[5]={5,1,15,20,25};
	int i,j,k=1,l,m;
	i = ++a[1];
	j = a[1]++;
	m = a[i++];
	printf("\n %d %d %d",i,j,m);
	printf("Tong cua cac so trong mang la \n",sum);
	int n = sizeof(d)/sizeof(int);
	printf("number of elements of the array d = %d \n",n);
	long int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	long int arr1[3][3]={{1,1,1},{2,2,2},{3,3,3}};
	int c[3][3];
	for (int i = 0; i <= 2; i++) {
      for (int j = 0; j <= 2; j++) {
         sum = 0;
         for (int k = 0; k <= 2; k++) {
            sum = sum + arr[i][k] * arr1[k][j];
         }
         c[i][j] = sum;
      }
   }
   printf("\nTich cua hai ma tran la: \n");
   for (int i = 0; i < 3; i++) 
   {
      for (int j = 0; j < 3; j++) {
         printf(" %d ", c[i][j]);
      }
      printf("\n");
   }
   
	//Pointers
	int *p = &n;
	printf("*p = %d\n",*p);
	printf("p = %p\n",p);
	printf("Size of memory to store a pointer = %d bytes\n", sizeof(p));
	void swap(int i, int j)
	{
		int t = i;
		i = j;
		j = t;
	}
	int a1 = 5, b1 = 6;
	printf("Before swap a1 = %d, b1 = %d \n",a1,b1);
	swap(&a1,&b1);
	printf("After swap a1 = %d, b1 = %d \n",a1,b1);
	
}

