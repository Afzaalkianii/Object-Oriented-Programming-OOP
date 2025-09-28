//Desturctor
#include<iostream>
using namespace std;
class Locker{
	public:
		Locker(){
			cout<<"Locker Allocated to Customer: "<<endl;
		}
		~Locker(){
			cout<<"Locker Returned By Customer: "<<endl;
		}
};

