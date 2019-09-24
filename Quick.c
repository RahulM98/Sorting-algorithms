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

void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int partition(int arr[],int l,int r)
{
	int pivot = (l+r)/2;
	int i,j;
	i = l;
	j = r;
	while(i < j)
	{
		while(arr[i] <= arr[pivot])
			i++;
		
		while(arr[j] > arr[pivot])
			j--;
	
		if(i<j)
			swap(&arr[i],&arr[j]);
	}
	swap(&arr[j],&arr[pivot]);
	return j;
}

void QuickSort(int arr[],int left, int right)
{
	if(left < right)
	{
		int p_index = partition(arr,left,right);
		QuickSort(arr,left,p_index-1);
		QuickSort(arr,p_index+1,right);
	}
}

int main()
{
	// type your code
	int arr[]={2,6,8,3,4,0,9,1};
	printf("Before sorting:-\n");
	display(arr,8);
	QuickSort(arr,0,7);
	printf("After sorting:-\n");
	display(arr,8);
	return 0;
}
