#include <iostream>
using namespace std;
main(){
int num, d1,d2,d3;
cout << "Enter a three digite Number :";
cin>> num;
d1 = num / 100;
d2 = (num % 100) / 10;
d3 = num % 10;
cout<<"\n Sum of "<<d1<<" + "<<d2<<" + "<<d3<<" = " <<d1 + d2 + d3;
}
