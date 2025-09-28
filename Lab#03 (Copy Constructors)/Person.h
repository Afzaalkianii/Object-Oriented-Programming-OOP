//Single Inheritance
#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
		void setPerson(string n, int a){
			name = n;
			age = a;
		}
		void showPerson(){
			cout<<"Name = "<<name<<endl;
			cout<<"Age = "<<age<<endl;
		}
};
class Student: public Person{
	public:
	int rollno;
	void setStudent(string n, int a, int r){
		setPerson(n,a); //calling set person base class to set name & age
		rollno = r;
	}
	void showStudent(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Roll Number: "<<rollno<<endl;
		
	}
};



















