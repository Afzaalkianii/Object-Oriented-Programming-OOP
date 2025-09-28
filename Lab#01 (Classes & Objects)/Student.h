#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int roll_no;
	float marks;
	void getData(){
		cout<<"Enter Your Name: "<<endl;
		cin>>name;
		cout<<"Enter Your Roll Number: "<<endl;
		cin>>roll_no;
		cout<<"Enter Your Marks: "<<endl;
		cin>>marks;
	}
	void displayData(){
		cout<<"Name: "<<name<<endl;
		cout<<"Roll Number: "<<roll_no<<endl;
		cout<<"Marks: "<<marks<<endl;
	}
};


