#include <iostream>
using namespace std;
main(){
	int celsius , fahrenheit;
	cout << " Enter the Fahrenheit : ";
	cin >>fahrenheit;
	celsius = (fahrenheit - 32) *5/9;
	cout << "\n The Temperature in Celsius = "<<celsius <<endl;
if(celsius >=0 && celsius<=18){cout << " Cold ";}
else if(celsius >=19 && celsius<=29){cout << " Moderate ";}
else if(celsius >=30 && celsius<=48){cout << " Hot ";}
else {cout << " Error ";}
}
