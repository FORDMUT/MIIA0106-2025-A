#include <iostream>
#include <string>
using namespace std; 



double circleArea(double radius) {
    
    const double PI = 3.1416;
    
    return PI * radius * radius;
}

double rectArea(double width, double height) {
    return width * height;
}

int main() {

    
    double c_area = circleArea(5.0);
    cout << "Circle Area = " << c_area << endl;

    double r_area = rectArea(10.0, 5.0);
    cout << "Rectangle Area = " << r_area << endl;

    return 0;
}