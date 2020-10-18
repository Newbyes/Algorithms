#include<iostream>
using namespace std;

int swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;	
	return 0;
}

int bubblesort(int arr[], int size)
{
	for(int i=0;i<size-1;i++)
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j] > arr[j+1])
				swap(&arr[j] , &arr[j+1]);
		}
	return 0;
}

int printarr(int array[], int length)
{
	for(int l=0;l<length;l++)
		cout<<array[l]<<endl;
	return 0;
}

int main()
{
	int n=10,elements[10]={68,52,36,82,65,23,30,11,2,4};
	cout<<"Unsorted array:\n";
	printarr(elements,n);
	bubblesort(elements,n);
	cout<<"Sorted Array:\n";
	printarr(elements,n);
	return 0;
}
