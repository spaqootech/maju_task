#include <iostream>
using namespace std;
main(){
char alpha;
cout<< " Enter any Character : ";
cin >> alpha;
if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||
alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||
alpha=='O'||alpha=='U'){
	cout<<"\n  Welcome ";
}else {
	cout << "ASCII Value of Next Character : "<<alpha + 1;
}
}
