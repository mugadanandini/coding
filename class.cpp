#include<iostream>
using namespace std;
class Student{
    private:
  int rollNo;
  string name;
  public:
    void setDetails(int r,string n) {
    	rollNo = r;
    	name = n;
	}	
	void display() {
		cout<<"Roll No:"<<rollNo<<",Name:"<<name<<endl;
      }
};
int main() {
Student s1;
s1.setDetails(130,"Nandini");
s1.display();
return 0;
}
