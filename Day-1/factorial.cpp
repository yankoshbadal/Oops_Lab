#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Factorial of " << num << " : " << factorial(num) << endl;

    return 0;
}