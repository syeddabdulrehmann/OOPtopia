// salary_system.h


#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual double calculateSalary() {
        cout << "Base Employee salary calculation called.\n";
        return 0.0;
    }
};

// Derived class for Permanent Employee
class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double bonus;

public:
	PermanentEmployee() {
	
        
    }
    PermanentEmployee(double bs, double b) {
        basicSalary = bs;
        bonus = b;
    }

    double calculateSalary() override {
        return basicSalary + bonus;
    }
};

// Derived class for Contract Employee
class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
	 ContractEmployee() {
        
    }
    ContractEmployee(double rate, int hours) {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    double calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};



