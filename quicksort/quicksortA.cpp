#include<iostream>

using namespace std;

int swap(int *x,int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	
	return 0;
}

int partition(int a[],int h, int l)
{
	int pivot = a[l];
	int i = l+1;
	for(int j = l+2;j<=h;j++)
	{
		if(a[j]<pivot)
		{
			swap(&a[i], &a[j]);
			i++;	
		}	
	} 
	swap(&a[i-1], &a[l]);
	return(i-1);
}

int quicksort(int ar[],int low,int high)
{
	if(low<high)
	{
		int pi = partition(ar,low,high);
		
		quicksort(ar,low,pi-1);
		quicksort(ar,pi+1,high);
	}
	return  0;
}

int printarr(int array[],int size)
{
	for(int x=0;x<size;x++)
		cout<<array[x]<<" ";
	cout<<endl;
	return 0;
}
int main()
{
	int arr[10]={35,64,24,86,30,82,11,96,4,57};
	int n=10;
	cout<<"Unsorted array: ";
	printarr(arr,n);
	quicksort(arr,0,n-1);
	cout<<"Sorted array: ";
	printarr(arr,n);	
	return 0;
}
