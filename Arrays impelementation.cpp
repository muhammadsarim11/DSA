#include<iostream>
using namespace std;
int main(){
//int size = 4;
int number[]={45,3,34,22,12};                 
int smallest = 34;
int largest = INT_MAX;
for(int i =0; i<=4; i++){
//	if(number[i]>smallest){
//		smallest = number[i];
largest = max(number[i],largest);
smallest = min(number[i],smallest);	

}      
cout<<largest<<endl;
cout<<smallest; 
	return 0;
}                     