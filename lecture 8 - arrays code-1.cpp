#include<iostream>
using namespace std;
int main(){
	int a[4];
	int i;
	cout<<"Give 5 integers as input: "<<endl;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"The given 5 inputs are: "<<endl;
	for(i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
