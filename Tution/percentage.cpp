#include <iostream>
using namespace std ;
int main ()  {

    float physics, chemistry , biology , percentage ;
    
    cout << "enter physics marks : " ;
    cin >> physics ;
    
    cout << "enter chemistry marks : " ;
    cin >> chemistry ;
    
    cout << "enter biology marks : " ;
    cin >> biology ;
    
    percentage = (physics + chemistry + biology ) / 300  * 100 ;
    
    cout<< "percentage is : "<< percentage << "%" ;
    
}
    
    
