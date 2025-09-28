#include<iostream>
using namespace std;
class Voter{
	public:
	string name;
	int age;
	bool isEligible();

};
 bool Voter::isEligible(){
 	return(age>18);
 }
