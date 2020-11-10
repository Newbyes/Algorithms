#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
	//traverse whole array
	for(int i=0; i<n; i++){
	int key =arr[i];
	int j= i-1;
		while( arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;  //this is the same index which was compared first in previous segment
	}
}

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={46,98,22,48,4,6,47};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"unsorted Array:"<<endl;
	print(arr, size);

	insertionsort(arr, size);	//insertion sort is a inplace sorting algorithm

	cout<<"sorted array:"<<endl;
	print(arr, size);

return 0;

}
