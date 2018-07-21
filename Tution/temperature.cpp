#include <iostream>
using namespace std ;
int main () {
	
	float f, c , k ;
	
	cout <<"Enter value of temp (in celcius) : " ;
	cin  >> c ;
	
	f = (c*9/5) + 32;
	k = c + 273.15;
	
	cout << "vale in Fare : "<< f << "\n" <<"vale in Kelvin : "<< k ;

}
