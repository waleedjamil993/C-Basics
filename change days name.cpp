#include<iostream>

using namespace std;

int main(){
	char c;
	cout<<"Enter a Character :";
	cin>>c;
	if(c== 'm'){
		cout<<"Today is Monday"; 
	}
	else if(c== 't'){
		cout<<"Today is Tuesday";
	}
	else if(c== 'w'){
		cout<<"Today is Wednesday";
	}
	else if(c== 't'){
		cout<<"Today is Thursday";
	}
	else if(c== 'f'){
		cout<<"Today is Friday";
	}
	else if(c== 's'){
		cout<<"Today is Saturday";
	}
	else{
			cout<<"Today is Sunday";
	}
	
	
	return 0;
}
