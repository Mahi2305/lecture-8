#include<iostream>
using namespace std;
int main(){
	int b[9];//code to print numbers in reverse order
	int i;
	cout<<"Give 10 numbers as input: "<<endl;
	for(i=0;i<10;i++){
		cin>>b[i];
	}	
	cout<<"The 10 given numbers in reverse order are: "<<endl;
	for(i=9;i>=0;i--){
		cout<<b[i]<<" ";
	}
	return 0;
}
