//Coversion User defined to another User Defined
//Using Constructor

#include <iostream>
using namespace std;


class ClassA{
	int value;
public:
	ClassA (int v) : value (v){}
	
	int getvalue() const {
		return value;
	}
};

class ClassB{
	int data;
public:
	ClassB(const ClassA& objA){
		data = objA.getvalue(); //Coverts ClassA's value to ClassB's data
	}
	void display(){
		cout <<"Class B data: "<<data<<endl;
	}
};




int main(){

	ClassA objA (100);
	ClassB objB = objA; //Conversion

	objB.display();


	return 0;
}