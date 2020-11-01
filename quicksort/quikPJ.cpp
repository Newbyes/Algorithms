#include<iostream>
using namespace std;

void swap(int *x, int *y){
        int tmp= *x;
        *x=*y;
        *y=tmp;
}

int partition(int arr[], int low, int high){
        int p=arr[high];
        int i= (low-1);

        for(int j = low; j <high; j++){
                if(arr[j]<p){
                        i++;
                        swap  (&arr[i], &arr[j]);
                }
        }
        swap(&arr[i+1], &arr[high]);
        return (i+1);
}

void quick(int arr[], int low, int high){
        if(low<high){
                int p=partition(arr, low, high);

                quick(arr,low, p-1);
                quick(arr, p+1, high);
        }
}

int main(){
        int arr[]={42,98,65,43,2,1,0};
        int n=sizeof(arr)/sizeof(arr[0]);
        quick(arr, 0,n);
        cout<<"Sorted array:"<<endl;
        for(int i=0; i<n;i++){
                cout<<arr[i]<<" ";
        }
}

