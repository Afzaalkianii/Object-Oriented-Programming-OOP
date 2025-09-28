#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    void setName(string n) {
        if (n.empty()) {
            cout << "Error: Name cannot be empty" << endl;
        } else {
            name = n;
        }
    }
    void setPrice(double p) {
        if (p > 0) {
            price = p;
        } else {
            cout << "Error: Price must be greater than 0" << endl;
        }
    }
    void setQuantity(int q) {
        if (q >= 0) {
            quantity = q;
        } else {
            cout << "Error: Quantity cannot be negative" << endl;
        }
    }
    string getName() {
        return name;
    }
    double getPrice() {
        return price;
	}
    int getQuantity() {
        return quantity;
    }
};

















