//Constructor Overloading
//*************************
#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length;
		float width;
	public:
//		Default Constructor
    Rectangle(){
    	length = 1.0;
    	width = 1.0;
	}
//	Parameterized Constructor
    Rectangle(float a, float b){
    	length = a;
    	width = b;
	}
//Single Parameter Constructor
    Rectangle(float s){
    	length = s;
    	width = s;
	}
	float area(){
		return 2*(length*width);
	}
	
	void display(){
		cout<<"Length = \t"<<length<<endl;
		cout<<"Width = \t"<<width<<endl;
		cout<<"Area = \t"<<area()<<endl;
	}
    
};


















