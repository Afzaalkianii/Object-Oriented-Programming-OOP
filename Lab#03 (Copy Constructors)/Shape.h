#include<iostream>
using namespace std;
class Shape{
	public:
		Shape(){
			cout<<"Shape Constructor Called: "<<endl;
		}
};
class Rectangle: public Shape{
	public:
	Rectangle(){
		cout<<"Rectangle Constructor Called: "<<endl;
	}
};
