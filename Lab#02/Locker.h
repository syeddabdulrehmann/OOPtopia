#include<iostream>
using namespace std;

class Locker {
	
	public:
    
    //constructor
	Locker () {
		
		cout << "Locker allocated to customer. " << endl;
	}
	
	//destructor	
	~Locker () {
		
		cout << "Locker returned by customer. " << endl;
	}
};
