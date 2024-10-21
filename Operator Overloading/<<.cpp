#include <iostream>
#include <string>
using namespace std;

class Demo{
public:
	string name;

	Demo(){}
	Demo(string a){
		this->name = a;
	}
	//Overloading insertion operator
	friend ostream &operator<<(ostream  &os, Demo &obj);

};

ostream &operator<<(ostream  &os, Demo &obj){
	os<<obj.name;
	return os;
}

int main()
{
	Demo myname("Yankosh");

	cout<<myname<<endl;


	return 0;
}