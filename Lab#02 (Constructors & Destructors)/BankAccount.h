//Parameterized Constructor
//**************************
#include<iostream>
using namespace std;
class BankAccount{
	private:
		string accountHolder;
		string accountNumber;
		double balance;
	public:
//	Parameterised Constructor
	BankAccount(string a, string b, double c){
		accountHolder = a;
		accountNumber = b;
		balance = c;
	}
	void showAccountDetails(){
		cout<<"Account HOlder\t"<<accountHolder<<endl;
		cout<<"Account Name\t"<<accountNumber<<endl;
		cout<<"Balance\t"<<balance<<endl;
	}
};
