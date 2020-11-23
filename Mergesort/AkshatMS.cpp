#include<iostream>
using namespace std;
int merge(int arr[],int l,int m,int r)
{
	int l1=m-l+1;
	int l2=r-m;
	int left[l1],right[l2];
	for(int i=0;i<l1;i++)
		left[i]=arr[l+i];
	for(int j=0;j<l2;j++)
		right[j]=arr[m+1+j];
	
	int x=0,y=0,z=0;
	while(x<l1 && y<l2)
	{
		if(left[x]<right[y])
		{
			arr[z]=left[x];
			x++;
		}
		else
		{
			arr[z]=right[y];
			y++;
		}
		z++;
	}
	
	while(x<l1)
	{
		arr[z]=left[x];
		z++;
		x++;
	}
	while(y<l2)
	{
		arr[z]=right[y];
		z++;
		y++;
	}
	
	return 0;
}
int mergesort(int arr[],int left,int right)
{
	int mid= (left+right)/2;
	mergesort(arr,left,mid);
	mergesort(arr,mid+1,right);
	
	merge(arr,left,mid,right);
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
	int size= sizeof(array)/sizeof(array[0]);
	cout<<"Unsorted Array: ";
	printarr(array,size);
	mergesort(array,0,size-1);
	cout<<"Sorted Array: ";
	printarr(array,size);
	return 0;
}
