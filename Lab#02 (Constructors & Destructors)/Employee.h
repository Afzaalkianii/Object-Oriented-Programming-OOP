//Default Constructor
//*********************
#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		string name;
		float salary;
	public:
//		Default Constructor
	Employee(){
		id = 0;
		name = "Not Assigned";
		salary = 0.0;
		
	}
	void DisplayDetails(){
		cout<<"ID = "<<id<<endl;
		cout<<"Name = "<<name<<endl;
		cout<<"Salary = "<<salary<<endl;
	}
};
