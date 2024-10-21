//Coversion User defined to another User Defined
//Using Casting Operator

#include <iostream>
using namespace std;

//class ClassB; //Forward Declaration
class ClassB{
	int data;
public:
	ClassB(int d):data(d){}
	void display(){
		cout <<"Class B data: "<<data<<endl;
	}
};

class ClassA{
	int value;
public:
	ClassA (int v) : value (v){}
	
	int getvalue() const {
		return value;
	}
	//Casting Operator
	operator ClassB(){
		return ClassB(value);
	}
};


int main(){
	ClassA objA(15);
	ClassB objB = objA;

	objB.display();
	return 0;
}