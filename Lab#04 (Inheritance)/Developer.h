//hierarchical inheritance
#include<iostream>
using namespace std;
class Employe{
	protected:
		string name;
		double salary;
	public:
		Employe(string n, double s){
			name = n,
			salary = s;
		}
		void displayEmploye(){
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : "<<salary<<endl;
		}
};
class Developer: public Employe{
	string programminglanguage;
	public:
		Developer(string n, double s, string p):Employe(n,s){
			programminglanguage = p;
		}
		void displaydeveloper(){
			displayEmploye();
			cout<<"Programming Language : "<<programminglanguage<<endl;
		}
};
class Designer : public Employe{
		string designtool;
		string programminglanguage;
	public:
		Designer(string n, double s, string p, string d):Employe(n,s){
			designtool = d;
			programminglanguage = p;
		}
		void displaydesigner(){
			displayEmploye();
			cout<<"Programming Language : "<<programminglanguage<<endl;
			cout<<"Design Tool : "<<designtool<<endl;
		}
};
















