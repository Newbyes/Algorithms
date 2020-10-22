
 #include<iostream>
 using namespace std;

 int binary(int arr[], int n, int x){
	int p=0;
	int r=n-1;
	
 while(r>=p){
	int m=(p+r)/2;
		if(arr[m]==x){
			return m;
		}
		else if(arr[m]>x){
			r=m-1;
		}
		else{
 			p=m+1;
		}
	    }
  return -1;
 }

	//main function
 int main(){
	int arr[]={2,5,44,87,92};
	int size=sizeof(arr)/sizeof(arr[0]);
	int x=5;
	int res=binary(arr, size, x);
	if(res== -1){
		cout<<"given no: \t"<< x <<"\tis not in the array"<<endl;
	} else{
		cout<<"the number is present at index:"<< res <<endl;
		}
 return 0;

 }
