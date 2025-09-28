#include<iostream>
#include"Student.h"
#include"Rectangle.h"
#include"Voter.h"
#include"Temperature.h"
#include"Calculator.h"
#include"Product.h"
//int main()
//{
//	Student s1;
//	s1.getData();
//	s1.displayData();
//}
int main() {
	int length, width;
    Rectangle rect;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    rect.setDimensions(length,width);

    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Perimeter of Rectangle: " << rect.perimeter() << endl;

    return 0;
}

//int main()
//{
//	while(true){
//	Voter voter1;
//	cout<<"Enter Your Name: "<<endl;
//	cin>>voter1.name;
//	cout<<"Enter Your Age: "<<endl;
//	cin>>voter1.age;
//	if(voter1.isEligible()){
//		cout<<voter1.name<<", You Are Eligible To Vote: "<<endl;
//	}else
//	cout<<voter1.name<<", You Are Not Eligible To Vote: "<<endl;
//	}
//}

//int main(){
//	float celsius;
//	Temperature temp1;
//	cout<<"Enter Temperature in Celsius: "<<endl;
//	cin>>celsius;
//	temp1.display();
//}

//int main() {
//    Calculator calc;
//    int choice;
//    
//    cout << "Enter first number: ";
//    cin >> calc.num1;
//    cout << "Enter second number: ";
//    cin >> calc.num2;
//
//    cout << "\nChoose an operation to perform:" << endl;
//    cout << "1. Add" << endl;
//    cout << "2. Subtract" << endl;
//    cout << "3. Multiply" << endl;
//    cout << "4. Divide" << endl;
//    cout << "Enter choice (1-4): ";
//    cin >> choice;
//  switch(choice) {
//        case 1:
//            cout << "\nResult: " << add(calc) << endl;
//            break;
//        case 2:
//            cout << "\nResult: " << subtract(calc) << endl;
//            break;
//        case 3:
//            cout << "\nResult: " << multiply(calc) << endl;
//            break;
//        case 4:
//            if(calc.num2 != 0)
//                cout << "\nResult: " << divide(calc) << endl;
//            else
//                cout << "\nError: Cannot divide by zero!" << endl;
//            break;
//        default:
//            cout << "\nInvalid choice!" << endl;
//    }
//
//    return 0;
//}

//int main() {
//    Product p;
//
//    p.setName("Laptop");
//    p.setPrice(78);
//    p.setQuantity(10);
//
//    cout << "Product Details:" << endl;
//    cout << "Name: " << p.getName() << endl;
//    cout << "Price: $" << p.getPrice() << endl;
//    cout << "Quantity: " << p.getQuantity() << endl;
//}




















