/*Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
If x matches with an element, return the index.
If x doesn’t match with any of elements, return -1. */
#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int x) //arr[]is the array, n is the size of array and x value to be found 
{
	for(int i=0;i<n;i++)    //i is the index
	{
		if(x==arr[i])
			return i;  //element found return the index	
	}
	return -1;  //element not found return -1
}
//I wrote the basic you can alter in any way you want :)  
int main()
{
	int size,element,array[10]={10,50,38,23,30,96,78,57,68,70};
	size=10;
	cout<<"Enter the element you want to find in our array: ";
	cin>>element;
	int flag = linear_search(array,size,element);
	if(flag == -1)
		cout<<"Couldn't find your element in our array. \n";
	else
		cout<<"Your element is at index: "<< flag+1;
	return 0;
}
