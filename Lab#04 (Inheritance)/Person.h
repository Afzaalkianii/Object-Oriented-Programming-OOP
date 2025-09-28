//Single inheritance
#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
	public:
		Person(string n, int a){
			name = n;
			age = a;
		}
		
	    void display_Person_info(){
	    	cout<<"Name = "<<name<<endl;;
	    	cout<<"Age = "<<age<<endl;
		}	
};
class Student: public Person{
	private:
		int student_id;
	public:
		
		Student(string n, int a,int i):Person(n,a){
			student_id = i;
			
		}
	    void display_student_info(){
		
		    display_Person_info();
	    	cout<<"Student Id = "<<student_id<<endl;
	    	
		}	
};














































