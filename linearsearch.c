#include<stdio.h>
int main()
{
	int array[100],search,c,n;
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	}
	printf("\nEnter the element to be searched:");
	scanf("%d",&search);
	for(c=0;c<n;c++)
	{
		if(array[c]==search)
		{
			printf("\n%d is present at the location %d in the array.Index value is %d",search,(c+1),c);
			printf("\n");
			break;
		}
	}
	if(c==n)
		printf("%d is not present in the array\n",search);
return 0;	
}