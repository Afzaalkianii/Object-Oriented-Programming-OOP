#include<iostream>
using namespace std;
class Calculator {
public:
    float num1, num2;
};

// Function definitions 
float add(Calculator c) {
    return c.num1 + c.num2;
}

float subtract(Calculator c) {
    return c.num1 - c.num2;
}

float multiply(Calculator c) {
    return c.num1 * c.num2;
}

float divide(Calculator c) {
    return c.num1 / c.num2;
}
