#include<iostream>

using namespace std ;

int main(){
	int Person;
	Person = 1;
	do{
//		cout<<"==================================="<<endl;
		cout<<"Glt Friend : "<<Person<<"\n";
//		cout<<"==================================="<<endl;
		Person = Person + 1;
//		cout<<"-----------------------------------"<<endl;
		cout<<"Glt Friend : "<<Person<<"\n";
//		cout<<"-----------------------------------"<<endl;
	}
	while(Person<3);
	
	cout<<"I am out";
	return 0;
}
