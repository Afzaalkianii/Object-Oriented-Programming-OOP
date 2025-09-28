//Shallow Copy
#include<iostream>
using namespace std;
class BankAccount{

	public:
//		Balance ko pointer ki form ma store kr rhy hn
		double * balance;
    public:
//    	Constructor memory Allocate ke k Value set kr rha ha
    BankAccount(double bal){
    	balance = new double;     //new memory allocate
    	*balance = bal;      //us memory ma balance store
    	cout<<"Balance Initialized to: "<<*balance<<endl;
	}
	~BankAccount(){  //Destructor value ko delete kr rha ha
	delete balance;  //allocated memory free ho jy gi
	cout<<"Destructor Called: "<<endl;	
	}
	void setBalance(double bal){  //function to set balance
		*balance = bal;
	}
	//function to display balance
	void display(){
		cout<<"balance = "<<*balance<<endl;
	}
	
};























