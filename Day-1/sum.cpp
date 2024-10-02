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
    int n;
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i / (double) factorial(i));
    }

    cout << sum << endl;


    return 0;
}