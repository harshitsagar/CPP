#include <iostream>
using namespace std;
int main(){

	int a , b , c , min ;
	cout<<"Enter three integers : ";
	cin >>a >> b >>c;
	min = a;
	if(b<min){
		min = b; 
	}	
	if(c<min){ 
		min = c;
	}
	cout <<"smallest value is : "<<min;	
}
