#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz,int target){
//	                   for traversing each index
for(int i =0; i<sz; i++){
	
	if(arr[i]==target){
		return i;
	}
}
	return -1;
	
}
int main(){
int arr[]= {4,5,3,1};
int sz=4;
int target = 1;


cout<<linearsearch(arr,sz,target);


	
	return 0;
}