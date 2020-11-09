#include<iostream>
using namespace std;
int insertionsort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
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
	int array[10]={91,25,30,91,67,52,24,48,34,57};
	int size = sizeof(array)/sizeof(array[0]);
	cout<<"Unsorted array: ";
	printarr(array,size);
	insertionsort(array,size);
	cout<<"Sorted array: ";
	printarr(array,size);
	return 0;
}
