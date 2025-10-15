#include<iostream>
using namespace std;
class Student {
public:
	Student() {
		cout<<"Default Constructor Called!"<<endl;
	}
};
int main() {
	Student s1;
	return 0;
}
