#include<iostream>
using namespace std;
class Student{
private:
	int rollNo;
	srting name;
public:
	Student() {
		RollNo=0;
		name="Unknown";
	}
	Student(int r,string n) {
		RollNo=r;
		name=n;
	}
	void diaplay() {
		cout<<"RollNo: "<<rollNo<<",Name:"<<name<<endl;
	}
};
int main() {
	Student s1;
	Student s2(101,"Nandini");
	s1.display();
	s2.display();
	return 0;
}
