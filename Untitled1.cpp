#include <iostream>
using namespace std;
int main(){
	int int1,int2,result;
	char n;
	
	cout<<"Enter first integer : ";
	cin>>int1;
	cout<<"\nEnter Second integer : ";
	cin>>int2;
	
	do{
		cout<<"\nChoose one : \n(a) Add\n(b) Substract\n(c) Multiply\n(d) Divide\n(e) Exit\n Choice : ";
		cin>>n;
	
		switch(n){
			case 'a' :	result = int1+int2;
						cout << "Answer is : "<<result<<"\n\n";
						break;
			case 'b' :	result = int1-int2;
						cout << "Answer is : "<<result<<"\n\n";
						break;
			case 'c' :	result = int1*int2;
						cout << "Answer is : "<<result<<"\n\n";
						break;
			case 'd' :	result = int1/int2;
						cout << "Answer is : "<<result<<"\n\n";
						break;
			case 'e' :	return 0;			
			default :	cout<<"\n<------You Choose the wrong Option------>";
						
		}	
		
	}
	while(1);
	
	
	
}
