#include<iostream>
using namespace std;

int sumfunc(int num){
	int sum = 0;
int lastdigit;
while(num>0){
	lastdigit = num%10;
	num = num/10;
	sum = sum+lastdigit;
	
}
return sum;
}


int main()
{

//int num = 2645;
cout<<sumfunc(2645);
	return 0;
}