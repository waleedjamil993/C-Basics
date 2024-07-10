#include<iostream>

using namespace std;

int main(){
	cout<<"11111111111111";
//	1. Take Size of class from user
	int size;
	cout<<"Enter the size of class :"; 
	cin>>size;
	
	string students[size];
//	Input names of students
	for(int i = 0; i<size;i++){
		cout<<"Enter name of students " << i + 1 <<" : ";
		cin>>students[i];
	}
	
//	Output names of students
	for(int j = 0; j<size; j++){
		cout<< students[j] <<endl;
	}
	
	
	
	
	return 0;
}
