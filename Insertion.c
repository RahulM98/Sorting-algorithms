// Author : @ Rahul

#include<stdio.h>

void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n\n");
}

void insertion(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp = arr[i];
		j = i-1;
		while(temp < arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
		display(arr,n);
	}
}

int main()
{
	int arr[]={2,6,8,3,4,0,9,1};
	printf("Before sorting:-\n");
	display(arr,8);
	insertion(arr,8);
	printf("After sorting:-\n");
	display(arr,8);
	return 0;
}
