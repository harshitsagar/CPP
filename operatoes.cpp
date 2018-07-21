#include <iostream>
using namespace std;
int main(){
	
    int int1 , int2 , result ;
    char n;
    
    cout<<"Enter the value of first integer  :" ;
    cin>>int1 ;
    cout<<"Enter the value of second integer :" ;
    cin>>int2 ;
    
    cout<< "Choose any operator : + , - , * , / : " ;
    cin >>n ;
    
    if(n== '+'){ 
    	result = int1 + int2 ;
    	cout<<"Answer is :" << result  ;
	}
	else if (n== '-'){
		result = int1 - int2 ;
    	cout<<"Answer is :" << result  ;
	} 
	else if (n== '*'){
		result = int1 * int2 ;
    	cout<<"Answer is :"  << result ;
	}
	else if (n== '/'){
    	result = int1 / int2 ;
    	cout<<"Answer is :" << result  ;
	}	
    else {
		cout << "You choose a wrong option........" ;
    }
}
