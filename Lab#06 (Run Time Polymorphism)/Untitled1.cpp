//Run time Polymorphism
#include<iostream>
using namespace std;
class Shape{
	public:
	virtual double area(){
		cout<<"Base Shape Area Called: "<<endl;
		return 0.0;
	}
};
class Rectangle: public Shape{
	private:
		double length , width;
	public:
		Rectangle(double l, double w){
			length = l;
			width = w;
		}
		double area() override{
		return length*width;
		}	
};
class Circle: public Shape{
	private:
		double radius;
	public:
		Circle(double r){
			radius = r;
		}
		double area() override{
		return 3.14 * radius * radius;
		}
};
int main(){
	Shape *s; 
	Rectangle r1(2 , 4);
	s = & r1;
	cout<<"Area of Rectangle: "<<s->area()<<endl;
	
	Circle c1(5);
	s = & c1;
     cout<<"Area of Circle: "<<s->area()<<endl;
	
}












