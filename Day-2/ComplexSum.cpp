#include <iostream>
using namespace std;

class Complex {
    int x, y;
    public:
        void getData() {
            int a, b;
            cout << "Enter real part: ";
            cin >> a;
            cout << "Enter imaginary part: ";
            cin >> b;

            x = a;
            y = b;
        }

        void Display() {
            cout << x << " + "<< y << "i";
            cout << "\n";
        }

        friend Complex sum(Complex a, Complex b);
};

Complex sum(Complex a, Complex b) {
    Complex c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;

    return c;
}

int main() {

    Complex a, b, c;
    cout << "Enter first complex number" << endl;
    a.getData();
    cout << "Enter second complex number" << endl;
    b.getData();
    c = sum(a, b);
    cout << "Sum of the two complex number is : ";
    c.Display();

    return 0;
}