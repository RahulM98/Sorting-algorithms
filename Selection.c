// Author : @ Rahul

#include<stdio.h>

void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n\n");
}

void selection(int arr[],int n)
{
	int i,j,temp,min_index;
	for(i=0;i<n-1;i++)
	{
		min_index = i;
		for(j=i;j<n;j++)
		{
			if(arr[j] < arr[min_index])
				min_index = j;
		}
		temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}
}

int main()
{
	int arr[]={2,6,8,3,4,0,9,1};
	printf("Before sorting:-\n");
	display(arr,8);
	selection(arr,8);
	printf("After sorting:-\n");
	display(arr,8);
	return 0;
}
