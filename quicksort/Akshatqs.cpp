#include<iostream>
using namespace std;

int swap(int *x,int *y)
{
	int temp = *x;
	*x=*y;
	*y=temp;
	return 0;
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return(i+1);
}
int quicksort(int ar[],int lo,int hi)
{
	if(lo<hi)
	{
		int pi=partition(ar,lo,hi);
		quicksort(ar,lo,pi-1);
		quicksort(ar,pi+1,hi);
	}
	return 0;
}
int printarr(int a[],int n)
{
	for(int b=0;b<n;b++)
		cout<<a[b]<<" ";
	cout<<endl;
	return 0;
}
int main()
{
	int array[10]={53,26,77,32,86,25,12,62,72,45};
	int size = sizeof(array)/sizeof(array[0]);
	cout<<"Unsorted array: ";
	printarr(array,size);
	quicksort(array,0,size-1);
	cout<<"Sorted array: ";
	printarr(array,size);
	
	return 0;
}
