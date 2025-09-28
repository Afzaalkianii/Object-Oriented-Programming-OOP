//Multiple Inheritance
#include<iostream>
using namespace std;
class Printer{
	public:
		void printdocument(){
			cout<<"Printing Document : "<<endl;
		}
};
class Scanner{
	public:
		void scandocument(){
			cout<<"Scanning Document : "<<endl;
		}
};
class Photocopier: public Printer, public Scanner{     //  OR
	public:                                            //printdocument();
		void photocopy(){                              //scandocument();
			cout<<"Photocopying Document : "<<endl;    //cout<<"photocopy doccument" <<endl; yeb asy base classes k functions calll kr k b ho sakta ha
		}
};

