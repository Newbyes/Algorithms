#include<iostream>
using namespace std;

void merge(int arr[], int front, int rear, int mid){
  int size1=mid-front+1;  //earlier tried to assign values directly in left and right array but got stuck in assigning values to right array without declaring sizes first
  int size2=rear-mid;     //also direct assigning worked only for first iteration
  int L[size1],R[size2];  //declaring left and right arrays
//assigning values to left array
  for(int i=0; i<=size1; i++){
    L[i]=arr[front+i];      //front+1 *front for indicatingthe starting index of original array *+i for incrementing the head fornext iteration
  }
//assigning values to right array
  for(int j=0; j<size2; j++){
    R[j]=arr[mid+1+j];
  }

  int i=0,j=0,k=front;
  while(i<size1 && j<size2){  //run the loop untill both the specifiers are valid
      if(L[i] < R[j]){
        arr[k]=L[i];
        i++;
        k++;
      }
      else{
      arr[k]=R[j];
      j++;
      k++;
      }
  }
}

void mergesort(int arr[],int front, int rear){
  while(rear>front){
    int mid=(front+rear)/2;
      mergesort(arr, front, mid);
      mergesort(arr, mid+1, rear);

      merge(arr, front, rear, mid);
    }
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
  print(arr,size);
  mergesort(arr,0, size-1);
  cout<<"array after sorting:"<<endl;
  print(arr, size);
  return 0;
}
