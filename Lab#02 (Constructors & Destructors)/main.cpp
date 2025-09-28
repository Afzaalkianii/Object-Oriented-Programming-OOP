#include<iostream>
#include"Employee.h"
#include"BankAccount.h"
#include"Rectangle.h"
#include"Locker.h"
//int main(){
//	Employee e1;
//	e1.DisplayDetails();
//}

//int main(){
//	BankAccount b1("Afzaal","7172",90001);
//	b1.showAccountDetails();
//}

//int main(){
//	Rectangle r1;
//	Rectangle r2(1.2,5.5);
//	Rectangle r3(4.5);
//	cout<<"Default Constructor: "<<endl;
//	r1.display();
//	cout<<"Parameterized Constructor: "<<endl;
//	r2.display();
//	cout<<"Single Parameter Constructor: "<<endl;
//	r3.display();
//}


int main()
{
    {
	
	Locker l1;
	}

	cout<<"New Locker Created on Heap, Using New: "<<endl;
	Locker * l2 = new Locker;
	delete l2;
}



















