#include<iostream>

using namespace std;

int main(){
	
    //	Write a C++ program to find the largest element of a given array of integers.

    //1. Take size of array from user.
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    
    //2. assigne size to array.	
    
    int numbers [size];
    //3. Input array values.
    
    cout<<"Please Enter VaLues"<<endl;
    for(int i=0;i<size;i++){
    	cin>>numbers[i];
	}
    //4. Declare largest variable as int largest = 0.
    int largest = 0;
    //5. Logic into the loop to find largest values.
    
    for(int j =0;j<size;j++){
    	
    	
    //6. Compare each value with largest value if (numbers[i] > largest).
    
    if (numbers[j] > largest){
    //7. If array value greater than largest then store value into largest.
    	  largest = numbers[j] ;
    	
	}
    
    
	}
    
    //8. print largest value.
    cout<<"Largest Values Is"<<largest;
    
    
    
	
	
	return 0; 
}
