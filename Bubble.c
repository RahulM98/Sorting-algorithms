// Author : @ Rahul

#include<stdio.h>

void display(int arr[],int n)
{
	//int n = sizeof(arr)/sizeof(arr[0]);
	int i;
	//printf("%d\n",(int)sizeof(arr));
	//printf("%d\n",sizeof(arr[0]));
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
}

void bubble(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	// type your code
	int arr[]={2,6,8,3,4,0,9,1};
	printf("Before sorting:-\n");
	display(arr,8);
	bubble(arr,8);
	printf("After sorting:-\n");
	display(arr,8);
	return 0;
}

