#include<iostream>
using namespace std;

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
