// div_exception.cpp
#include <iostream>
#include <stdexcept>
using namespace std;
double safe_div(double a, double b){
    if(b == 0.0) throw runtime_error("Division by zero!");
    return a / b;
}
int main(){
    try{
        cout<<safe_div(10,2)<<"\n";
        cout<<safe_div(5,0)<<"\n";
    } catch(const exception &e){
        cout<<"Caught exception: "<<e.what()<<"\n";
    }
}

