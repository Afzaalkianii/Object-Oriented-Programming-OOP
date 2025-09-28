//Multilevel Inheritance
#include<iostream>
using namespace std;
class Person1{
	protected:
		string name;
		int age;
	public:
		Person1(string n, int a){
			name = n;
			age = a;
		}
	    void displayPerson(){
	    	cout<<"Name = "<<name<<endl;
	    	cout<<"Age = "<<age<<endl;
		}	
};
class Employee: public Person1{
	protected:
		int employee_id;
	public:
		Employee(string n, int a, int i):Person1(n,a){
			employee_id = i;
		}
		void displayEmployee(){
			displayPerson();
			cout<<"Employee ID = "<<employee_id<<endl;
		}
};
class Manager : public Employee{
	private:
		string department;
	public:
		Manager(string n, int a, int i, string d):Employee(n,a,i){
			department = d;
		}
		void displayManager(){
			displayEmployee();
			cout<<"Manager's Department = "<<department<<endl;
		}
};















