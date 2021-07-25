#include<stdio.h>
main()
{
//	int array[26],i;
//	for(i=0;i<=25;i++)
//	{
//		array[i] = 'A' + i;
//		printf("\n %d %c",array[i],array[i]);
//	}
	int a[5] = {5,1,15,20,25};
	int i,j,k = 1, m;
	i = ++a[1];
	j = a[1]++;
	m = a[i++];
	printf("\n %d %d %d",i,j,m);
}
