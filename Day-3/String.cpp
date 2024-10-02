#include <iostream>
#include <string.h>
using namespace std;

class String{
private:
    char *str;
public:
    String() {
        str = new char[1];
        str[0] = '\0';
    }
    String(const char *s1) {
        str = new char[strlen(s1) + 1];
        strcpy(str, s1);
    }

    String(String &s) {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    void display() {
        cout << this->str << endl;
    }

    int size() {
        return strlen(str);
    }

    friend String concat(const String &s1, const String &s2);

    ~String() {
        delete[] str;
    }
};

String concat(const String &s1, const String &s2) {
    String newString(s1.str);
    strcat(newString.str, s2.str);
    return newString;
}


int main() {
    String str1("suraj");
    String str2("biswas");

    String str3 = concat(str1, str2);
    str3.display();
    cout << str3.size() << endl;
    String str4;

    return 0;
}