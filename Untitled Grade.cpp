#include<iostream>

using namespace std;

int main(){
//	Grade System
int marks;
cout<<"Enter Marks";
cin>>marks;

if(marks>=50 && marks<60){
	cout<<"Grade is D";
}
else if(marks>=60 && marks<70){
	cout<<"Grade is C";
}
else if(marks>=70 && marks<80){
cout<<"Grade is B";
}
else if(marks>=80 && marks<90){
cout<<"Grade is A";
}
else if(marks>=90 && marks<100){
cout<<"Grade is A+";
}
else if(marks>=0 && marks<50){
cout<<"Fail";
}
else{
	cout<<"Invalid Marks";
}


	return 0;
}
