#include<iostream>
using namespace std;
int merge(int arr,int lo,int m,int hi)
{
	
	return 0;
}
int mergesort(int arr,int low,int high)
{
	int mid = (low+high)/2;
	mergesort(arr,low,mid);
	mergesort(arr,mid+1,high);
	
	merge(arr,low,mid,high);
	return 0;
}
int printarr(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
int main()
{
	int array[10]={17,63,60,64,40,50,9,16,21,34};
	int size= sizeof (array) / sizeof (array[0]);
	cout<<"Unsorted array: ";
	prinarr(array,size);
	mergesort(array,0,size-1);
	cout<<"Sorted array: ";
	printarr(array,size);
	return 0;
}
