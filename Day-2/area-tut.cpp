#include <iostream>
using namespace std;

int area(int l) {
    return l * l;
}

float area(float r) {
    return (22 / (float)7) * r * r;
}

int area(int l, int b) {
    return l * b;
}

int main() {
    int a, l, b;
    float r;
    cout << "Enter length of square: ";
    cin >> a;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Area of square: " << area(a) << endl;
    printf("Area of circle: %.2f\n", area(r));
    cout << "Area of rectangle: " << area(l, b) << endl;

    return 0;
}