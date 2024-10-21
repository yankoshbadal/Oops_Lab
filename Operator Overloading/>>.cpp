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
	friend istream &operator>>(istream  &is, Demo &obj);

};

istream &operator>>(istream  &is, Demo &obj){
	is>>obj.name;
	return is;
}

int main()
{
	Demo myname;
	cin>>myname; //Get input for myname.name
	cout<<"The value of name variable in the obj is : "<<myname.name<<endl; //Display the input value
	
	return 0;
}