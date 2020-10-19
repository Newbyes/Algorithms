#include<iostream.h>
#include<conio.h>
void insertion(int A[],int size);
void main()
{
cout<<"Enter the size of the array\n";
int size;
cin>>size;
int arr[80];
for(int i=0;i<size;i++)
{
cout<<"Enter the element at position "<<i+1<<" of the array\n";
cin>>arr[i];
}
void insertion(int A[],int size)
{
int i,j,key;
for(i=1;i<size;i++)
{
key=A[i];
j=i-1;
while(j>=0 && A[j]>key)
{
A[j+1]=A[j];
j=j-1;
}
A[j+1]=key;
}
cout<<"\nArray after sorting is: ";
for(int m=0;m<size;m++)
cout<<A[m]<<" ";
}

