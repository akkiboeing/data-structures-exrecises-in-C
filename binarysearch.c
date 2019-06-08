#include<stdio.h>
#include<math.h>
int binsearch(int *array,int n,int key)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=floor((low+high)/2);
		if(array[mid]<key)
			low=mid+1;
		else if(array[mid]==key)
			return mid;
		else if(array[mid]>key)
			high=mid-1;
	}
			return -1;
}
int main()
{
	int n,i,key,index;
	int array[100];
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements in sorted order: ");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(i=0;i<n;i++)
	{
		if(array[i]<array[i-1]&&i!=0)
		{
          printf("\nGiven inputs are not sorted in descending order\n");
          return 0;
		}
	}
	printf("\nEnter the element to be searched: ");
	scanf("%d",&key);
	index=binsearch(array,n,key);
	if(index==-1)
	{
       printf("\nElement not found\n");
	}
	else
		printf("\nElement %d is at index position %d\n",key,index);
	return 0;
}