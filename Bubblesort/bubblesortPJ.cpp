
 #include<iostream>
 using namespace std;

void swap(int *x, int *y){
	int temp= *x;
	*x=*y;
	*y=temp;
}

void bubbleSort(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr{j+1]);
		}
	}
}

 int main(){
	int arr[]={22, 19, 38, 48, 3, 24, 7};
 	int size= sizeof(arr)/sizeof(arr[0]);
        	cout<<"array before sorting:"<<endl;
	for(int i=0; i<size; i++){
		cout<< arr[i];
	}

	bubbleSort(arr, size);

	         cout<<"array after bubbleSort sorting:"<<endl;
	for(int i=0; i<size; i++){
		cout<< arr[i];
	}


 return 0;
 }
