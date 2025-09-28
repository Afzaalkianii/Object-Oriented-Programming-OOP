// template_calc.cpp
#include <iostream>
#include <stdexcept>
using namespace std;

template<typename T>
class Calc {
public:
    T add(T a,T b){ return a+b; }
    T sub(T a,T b){ return a-b; }
    T mul(T a,T b){ return a*b; }
    T divide(T a,T b){
        if(b == 0) throw runtime_error("Divide by zero in template calc");
        return a / b;
    }
};

int main(){
    Calc<double> c;
    cout<<c.add(2.5,3.1)<<"\n";
    try{ cout<<c.divide(5.0,0.0)<<"\n"; } catch(exception &e){ cout<<"Error: "<<e.what()<<"\n"; }
}

