//Call by Value and call by Reference
#include<iostream>
using namespace std;
//Function: call by value
void callByValue(int x) {
	x=x+10;
	cout<<"Inside callByValue function,x="<<x<<endl;
}
//Function: call by reference
void callByReference(int &y) {
	y=y+10;
	cout<<"Inside callByReference function,y="<<y<<endl;
}
int main() {
	int a=20;
	int b=20;
	cout<<"Before callByValue,a="<<a<<endl;
	callByValue(a);
	cout<<"After callByValue,a="<<a<<endl;
	cout<<"Before callByReference,b="<<b<<endl;
	callByReference(b);
	cout<<"After callByReference,b="<<b<<endl;
	return 0;
}
