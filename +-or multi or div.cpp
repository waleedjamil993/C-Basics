#include<iostream>

using namespace std;

int main(){
	cout<<"Enter + for addition \n";
	cout<<"Enter * for multiplication \n";
    cout<<"Enter - for subtraction \n";
	cout<<"Enter / for division \n";
	int a , b , x;
	char c;  
	cout<<"Enter First Number :";
	cin>>a;
	cout<<"Enter Second Number :";
	cin>>b;
	cout<<"Select Operation :";
	cin>>c;
	
	if(c== '+'){
		x = a+b;
		cout<<"Result After Addition :"<<x; 
	}
	else if(c== '*'){
		 x = a*b;
		 	cout<<"Result After Multiplication :"<<x; 
	}
		else if(c== '-'){
		 x = a-b;
		 	cout<<"Result After Subtraction :"<<x; 
	}
		else if(c== '/'){
		 x = a/b;
		 	cout<<"Result After Division :"<<x; 
	}
	else{
	cout<<"Invalid Operation";
	}
	 
	return 0;
}
