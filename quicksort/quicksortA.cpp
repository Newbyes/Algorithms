#include<iostream>

using namespace std;

int arr[10]={35,64,24,86,30,82,11,96,4,57};

int swap(int *x,int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	
	return 0;
}

int parition(int h, int l)
{
	int pivot = arr[l];
	int i = l+1;
	for(int j = h; j>=i;j++)
	{
		
	} 
}
