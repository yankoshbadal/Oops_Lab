//User Defined to Basic 

#include <iostream>
#include <string>
using namespace std;

class Distance{
	int meters;
	int kilo;
public:
	Distance(){}
	Distance(int k, int m):meters (m), kilo (k){
		
	}

	operator int(){
		int met = meters+1000*kilo;
		return met; // Converts Object to integer
	}
	
	void display(){
		cout <<kilo<<" KM And "<<meters<<" Meters"<<endl;
	}
};


int main()
{
	Distance d1(4,200);
	d1.display();


	int converted = d1; //Converts Object to integer
	cout<<"Integer Value: "<<converted<<endl;


	return 0;
}
