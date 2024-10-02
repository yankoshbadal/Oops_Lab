#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int studentId;
    float percentage;

public:
    void putData() {
        cout << "Name: " << name << endl;
        cout << "Student Id: " << studentId << endl;
        printf("Percentage is : %.2f%\n", percentage);
    }

    void getData() {
        cout << "Enter your name : ";
        getline(cin, name);
        cout << "Enter your studentId : ";
        cin >> studentId;
        cout << "Enter your percentage : ";
        cin >> percentage;
    }
};

int main() {
    Student s1, s2;
    s1.getData();
    s1.putData(); 

    return 0;
}