/* 
    Compare x with the middle element.
    If x matches with middle element, we return the mid index.
    Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
    Else (x is smaller) recur for the left half.
    Goes on recursively until we find the element(if it exist in the array).
*/
#include<iostream>
using namespace std;

int binary_search(arr[],n,x) //arr[] is the array,n is the size of the array and x is element to be found
{
	int f=0,l=n-1;       //f is the first element in the array and l is the last element in the array
	int m = (f+l)/2;     //m is the mid element of the array
	while(f<=l)
	{
		if(arr[m]==x)
			return m;	//If element is found
		else if(arr[m]>x)
			l=m-1;		//to select the left /small numbered part of the array 
		else
			f=m+1;		//to select the right /large numbered part of the array
		m = (f+l)/2;
	}
	return -1;
} 
//writing some basic code you can alter according to your convenience 
int main()
 {
 	int size=10,element,array[10]={2,3,5,7,11,13,17,19,23,29} ;         //MUST REMEMBER ARRAY SHOULD BE SORTED FOR BINARY SEARCH
 	cout<<"Enter the element you want to find in our array: ";
 	cin>> element;
 	int flag =  binary_search(array,size,element);			//array index of element is saved in flag
 	if(flag == -1)
 		cout<<"The element is not in our array\n";
 	else
 		cout<<"The element is at index: "<<flag+1<<endl;
 	return 0;
 }
