#include<iostream>
using namespace std;

void merge(int arr[], int front, int rear, int mid){
  int L[],R[];
}

void mergesort(int arr[],int front, int rear){
    int mid=(front+rear)/2;
      mergesort(arr, front, mid);
      mergesort(arr, mid+1, rear);

      merge(arr, front, rear, mid);
}

void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]={20,176,96,4,2,0,46};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<"array before sorting:"<<endl;
  print(arr,n);
  mergesort(arr);
  cout<<"array after sorting:"<<endl;
  print(arr, n);
  return 0;
}
