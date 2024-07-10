#include<iostream>

using namespace std;

int main(){
	int n1 , n2 , x;
	
	char ch;
	
	cout<<"Enter + For Addition \n";
	cout<<"Enter - For Subtraction\n";
	cout<<"Enter / For Division\n";
	cout<<"Enter * For Multiplication\n";
	
	cout<<"Enter First Number :";
	cin>>n1;
	cout<<"Enter Second Number :";
	cin>>n2;
	cout<<"Choose an Operation :";
	cin>>ch;
	
	
	switch(ch){
		case '+' :
        x = n1 + n2;
		cout<<"Addition is :"<<x;
		break;
		case '-' :
		x = n1 - n2;
		cout<<"Subtraction is :"<<x;
		break;
		case '/' :
		x = n1 / n2;
		cout<<"Division Result :"<<x;
		break;
		case '*' :
		x = n1 * n2;
		cout<<"Multiplication is :"<<x;
		break;
		default :
			cout<<"Choose a Correct Operation ?";
			
	}
	cout<<"\nOut of the Switch";
	
	
	
	
}
