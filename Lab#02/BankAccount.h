#include<iostream>
using namespace std;

class BankAccount {
	
	string accountNumber;
	string accountHolder;
	double balance;
	
	public:
	
	//parameterized constructor
	BankAccount (string accNum , string accHolder , double bal ) {
		
	accountNumber = accNum;
	accountHolder = accHolder;
	balance = bal;
		
		
	}
	
	//method to display data
	void showAccountDetails () {
		
		cout << "===========================" <<endl;
		cout << "    Account Details        " <<endl;
		cout << "===========================" <<endl;
		cout << "Account No: " << accountNumber <<endl;
		cout << "Holder: " << accountHolder << endl;
		cout << "Balance: " << balance <<endl;
		
	}
    
};
