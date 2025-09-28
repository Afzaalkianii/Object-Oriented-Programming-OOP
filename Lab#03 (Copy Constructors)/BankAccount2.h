//Deep copy
#include<iostream>
using namespace std;
class BankAccount2{
	private:
		//balance ko pointer ki form ma store kary ga
		double * balance;
	public:
		//Constructor
	    BankAccount2(double bal){
	    	balance = new double; //memory allocate
	    	*balance = bal; //value assign
	    	cout<<"Constructor: Balanced Initialized: "<<*balance<<endl;
		}
		//Deep Copy constructor
		BankAccount2(const BankAccount2 & b){
			balance = new double;
			*balance = *(b.balance); // dusry object ka balance copy kary ga
			cout<<"Deep Copy Constructor Called: "<<endl;
		}	
		~BankAccount2(){
			delete balance; // memory free kary ga
			cout<<"Destructor called: "<<endl; 
		}
		//setter function balance modify kary ga
		void setBalance(double bal){
			*balance = bal;
		}
		//display function
		void display(){
			cout<<"Balance = "<<*balance<<endl;
		}
	
};




















