#include<iostream>
using namespace std;
class Temperature{
	public:
	float celsius;
	float convertTemp(){
	return (celsius*9.0/5.0)+32;
	}
	void display(){
	float fahrenheit=convertTemp();
	cout<<"Temperature in Fahrenheit: "<<fahrenheit<<" F "<<endl;
	}
};
