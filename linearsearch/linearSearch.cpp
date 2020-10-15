//cpp code for implementation of linear search
//in linear search start from  leftmost  element of array and compare encounterd element with required

#include<iostream>
using namespace std;


int linear(int arr[],int size,int x){
	   for(int  i=0; i<size; i++){
			if(x==arr[i])
			return i;
		        else
			return 0;
		}
	}
void main(){
	int arr[10]={44,52,3,6,97,48,19,22,38,50};
	int size=sizeof arr/sizeof arr[0];
	cout<<"Enter the number to search"<<endl;
	int x;
	cin>>x;
	int result=linear(arr, size, x);
	if(result==0){
		cout<<"given number is not present in present array";
	    }
	else 
		cout<<"given number is present at index:"<< result+1;

}
