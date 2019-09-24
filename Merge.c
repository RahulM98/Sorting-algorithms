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

void Merge(int arr[],int l,int m,int r)
{
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1],R[n2];
	int i,j,k;
	for(i=0;i<n1;i++)
		L[i] = arr[l+i];
	for(i=0;i<n2;i++)
		R[i] = arr[m+i+1];
	printf("\n");
	i = j = 0;
	k = l;
	while(i<n1 && j<n2)
	{
		if(L[i]<R[j])
		{
			arr[k++] = L[i];
			i++;
		}
		else
		{
			arr[k++] = R[j];
			j++;
		}
	}
	while(i<n1)
	{
		arr[k++] = L[i];
		i++;
	}
	while(j<n2)
	{
		arr[k++] = R[j];
		j++;
	}
}

void mergesort(int arr[],int left,int right)
{
	if(left < right)
	{
		int mid = (left+right)/2;
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		Merge(arr,left,mid,right);
	}
}

int main()
{
	// type your code
	int arr[]={12, 11, 13, 5, 6, 7};
	printf("Before sorting:-\n");
	display(arr,6);
	mergesort(arr,0,6-1);
	printf("After sorting:-\n");
	display(arr,6);
	return 0;
}

