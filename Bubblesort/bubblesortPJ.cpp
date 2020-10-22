
 #include<iostream>
 using namespace std;




int bubbleSort(int arr[], int n){

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
