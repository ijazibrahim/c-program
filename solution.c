#include<stdio.h>
void main()
{
	int n,a[10],b[10],found=0,i;
	printf("enter the no. of elements to be stored\n ");
	scanf("%d",&n);
	printf("enter the elements of FIRST array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements of second array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			found=1;
		}
	}
	if(found==0)
	{
		printf("array are equal\n");
	}
	else
	{
		printf("arrays are not equal\n");
	}
}
