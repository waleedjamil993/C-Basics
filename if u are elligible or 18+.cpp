#include<iostream>

using namespace std ;

int main(){
	int age , edu ;
	cout<<"Enter Age :"; 
	cin>>age;
	cout<<"Enter Education :";
	cin>>edu;
	if(age>18){
		if(edu>=12){
			cout<<"You Are Eligible";
		}
		else{
			cout<<"Your Education not match our Requirments " ;
		}
	}
	else{
		cout<<"You Are Under Age ";
	}
	cout<<"\n success!";
	
	
	
	return 0;
}
