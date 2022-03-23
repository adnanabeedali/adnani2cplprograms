#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp,key,first,last,mid;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter %d number of elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Unsorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	first=0;
	last=n-1;
	printf("Enter the key:\n");
	scanf("%d",&key);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			printf("%d found at %d",key,mid+1);
			return 1;
		}
		else if(key<a[mid])
		{
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
	}
	printf("%d not found\n",key);
	return 0;
}
		
	
