#include<iostream>
using namespace std;


using namespace std;
class Employee {
	
	int id;
	string name;
	float salary;
	
	public:
	
	//default constructor
	Employee () {
		
		id = 0;
		name = "Not Assigned";
		salary = 0.0;
	}
	
	//method to diplay employee
	void displayDetails () {
		
		cout << "===========================" <<endl;
		cout << "     Details               " <<endl;
		cout << "===========================" <<endl;
		cout << "Employee ID: " << id <<endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary <<endl;
		
	}
};

