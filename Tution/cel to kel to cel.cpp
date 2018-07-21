#include <iostream>
using namespace std;
int main(){
	
    int kel , cel , n ;
    cout<< "Menu :\n(1) kelvin to celcious \n(2) celcious to kelvin \nChoose one : " ;
    cin >>n ;
    
    if(n==1){
    	cout << "Enter temp in K : ";
    	cin >> kel; 
    	cout<< "Temp in celcious is : "<<kel-273;
	}
	else if (n==2){
		cout << "Enter temp in C : ";
    	cin >> cel; 
    	cout<< "Temp in celcious is : "<<cel+273;
	} 
    else {
		cout << "You choose a wrong option........" ;
    }
}
