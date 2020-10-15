/* 
    Compare x with the middle element.
    If x matches with middle element, we return the mid index.
    Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half.
    Else (x is smaller) recur for the left half.
    Goes on recursively until we find the element.
*/
#include<iostream>
using namespace std;

int binary_search(arr[],n,x) //arr[] is the array,n is the size of the array and x is element to be found
{
	int f=0,l=n-1;       //f is the first element in the array and l is the last element in the array
	int m = (f+l)/2;     //m is the mid element of the array
	for(int i=0,f==l,i++)
	{
		if(arr[m]==x)
			return m;
		else if(arr[m]>x)
			l=m;
		else
			f=m;
		m = (f+l)/2;
	}
	return -1;
} 
//writing some basic code you can alter according to your convenience 
 int main()
 {
  return 0;
 }
