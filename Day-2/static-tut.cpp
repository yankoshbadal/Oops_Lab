#include <iostream>
using namespace std;

class Item {
    int number;
    static int cnt;

public:
    void get_number(int x)
    {
        number = x;
        cnt++;
    }

    void displayCount()
    {
        cout << cnt << endl;
    }
};

int Item::cnt = 0;

int main() {
    Item a, b, c;
    a.get_number(1);
    b.get_number(2);
    c.get_number(3);
    a.displayCount();
    b.displayCount();
    c.displayCount();

    return 0;
}