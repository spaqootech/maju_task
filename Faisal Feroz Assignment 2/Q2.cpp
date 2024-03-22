#include <iostream>
using namespace std;
main(){
	float Z , R ,A ,X;
	int x =1,y=2,a=3,b=4,c=5,d=6,g=7,v=8;
	Z = (x*3)*(x*x*x)/(y-4)*(y+5);
	R = (2*v)*6.22*(c+d)/g+v;
	A = (7.76*b)*(x*y+a)/c-0.8+2*b/(x+a)*(1/y);
	X = (12*(x*x*x))/4*x+(8*(x*x))/4*x+x/8*x+8/8*x;
	cout << " Z = " << Z <<endl;
	cout << " R = " << R <<endl;
	cout << " A = " << A <<endl;
	cout << " X = " << X <<endl;
	
		 if(Z>R||Z>A||Z>X){cout << " Z is Biggest Number";}
	else if(R>A||R>X||R>Z){cout << " R is Biggest Number";}
	else if(A>X||A>Z||A>R){cout << " A is Biggest Number";}
	else if(X>Z||X>R||X>A){cout << " X is Biggest Number";}
	else{cout << " Error";}
}
