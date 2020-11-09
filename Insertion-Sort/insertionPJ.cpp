#include <iostream>
using namespace std;

void insertionsort(int arr, int n){
	//traverse whole array
	for(int i=0; i<n; i++){
		
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
