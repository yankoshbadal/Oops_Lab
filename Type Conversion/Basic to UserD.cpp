//Using construction
#include <iostream>
#include <string>
using namespace std;

class Distance{
	int meters;
public:
	Distance(){}
	Distance(int m){
		this->meters = m;
	}
	void display(){
		cout << this->meters<<endl;
	}
};


int main()
{
	Distance d1 = 100; // Coverts integer 100 to Distance object 

	d1.display();
	return 0;
}