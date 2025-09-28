#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int width;

public:
	// Function to set dimensions
    void setDimensions(int length, int width);
    int area(); // Function to calculate area
    int perimeter();// Function to calculate perimeter
};

// Function definitions outside the class
void Rectangle::setDimensions(int l, int w) {
    length = l;
    width = w;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}




