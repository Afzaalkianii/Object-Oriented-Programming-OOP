//Compile Time Polymorphism

#include<iostream>
using namespace std;
class Distance{
	public:
		int feet;
		int inch;
	Distance(int f = 0, int i = 0){
		feet = f;
		inch = i;
	}
	bool operator == (Distance d){
		return (feet == d.feet && inch == d.inch);
	}	
	void display(){
		cout<<feet<<" Feet "<<inch<<" Inches "<<endl;
	}
};
int main(){
	Distance d1(3,8);
	Distance d2(3,8);
	Distance d3(5,9);
	cout<<"Distance 1: ";
	d1.display();
	cout<<"Distance 2: ";
	d2.display();
	cout<<"Distance 3: ";
	d3.display();
	
	if (d1 == d2){
		cout<<"Distance 1 Equal To Distance 2: "<<endl;
	}else
	cout<<"Distance 1 Is Not Equal To Distance 2: "<<endl;
	
	if (d1 == d3){
		cout<<"Distance 1 Is Equal To Distance 2: "<<endl;
	}else
	cout<<"Distance 1 Is Not Equal To Distance 3: "<<endl;
	
}























