#include <iostream>
using namespace std ;
int main () {
	char ch = 'A' ;
	int num = ch ;
	cout<<"The ASCII code for " <<ch<<" is " <<num<<"\n" ;
	cout<<"Adding 1 to the character code \n" ;
	ch = ch + 1 ;
	num = ch ;
	cout<<"The ASCII code for " <<ch<<" is "<<num<<"\n" ;
	return 0 ;
}
