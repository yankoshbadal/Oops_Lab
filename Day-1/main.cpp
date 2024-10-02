#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float physics, chemistry, maths;
    float totalMarks = 300;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter physics marks: ";
    cin >> physics;
    cout << "Enter chemistry marks: ";
    cin >> chemistry;
    cout << "Enter maths marks: ";
    cin >> maths;

    float marks = physics + chemistry + maths;
    float percentageGained = (marks / totalMarks) * 100;
    cout << "\n\n\n" << endl;
    cout << "Name: " << name << endl;
    cout << "Physics Marks: " << physics << endl;
    cout << "Chemistry Marks: " << chemistry << endl;
    cout << "Maths Marks: " << maths << endl;
    printf("Percentage gained %.2f%\n", percentageGained);


    return 0;
}