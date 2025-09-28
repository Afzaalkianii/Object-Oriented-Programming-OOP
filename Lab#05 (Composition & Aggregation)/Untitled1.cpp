// comp_calc.cpp
#include <iostream>
using namespace std;

class Display {
public:
    void showResult(double r) { cout << "Result: " << r << '\n'; }
    void showLast(double r)   { cout << "Last result: " << r << '\n'; }
};

class Calculator {
    Display disp;         // composition: Calculator owns Display
    double lastResult = 0;
public:
    double add(double a, double b)    { lastResult = a + b; disp.showResult(lastResult); return lastResult; }
    double sub(double a, double b)    { lastResult = a - b; disp.showResult(lastResult); return lastResult; }
    double mul(double a, double b)    { lastResult = a * b; disp.showResult(lastResult); return lastResult; }
    double divide(double a, double b) { lastResult = b ? (a / b) : 0; if(b==0) cout<<"Divide by zero!\n"; disp.showResult(lastResult); return lastResult; }
    void showLast() { disp.showLast(lastResult); }
};

int main() {
    Calculator c;
    c.add(3,4);
    c.mul(2,5);
    c.divide(10,0);
    c.showLast();
    return 0;
}

