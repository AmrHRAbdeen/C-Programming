/* Binary Search */
#include <stdio.h>
int binSearch (int x , int arr[] , int n){
	int low , mid , high;
	low =0;
	high=n-1;
	while( low <= high){
		mid = (low+high)/2;
		if(x < arr[mid]){
			high = mid-1;
		}
		else if (x > arr[mid]){
			low = mid+1;
		}
		else 
			return mid;
	}
	return -1;
}

int main(){
	int val;
	// Sorted Array in Assending Order
	int x[]={2,5,8,12,16,23,38,56,72,91};
	val = binSearch(72,x,10);
	printf("Index of 72 in x is : %d \n",val);
	return 0;
}
