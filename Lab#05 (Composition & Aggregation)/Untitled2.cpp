// agg_calc.cpp
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Calculator {
public:
    double add(double a,double b){ return a+b; }
    // other ops...
};

class Student {
    string name;
    shared_ptr<Calculator> calc; // aggregation: shared
public:
    Student(string n, shared_ptr<Calculator> c): name(n), calc(c) {}
    void doAdd(double a,double b) {
        cout<<name<<" -> "<<a<<" + "<<b<<" = "<<calc->add(a,b)<<"\n";
    }
};

int main(){
    auto sharedCalc = make_shared<Calculator>();
    vector<Student> students {
        {"Ali", sharedCalc},
        {"Sara", sharedCalc},
        {"Omar", sharedCalc}
    };
    for(auto &s: students) s.doAdd(2,3);
    return 0;
}

