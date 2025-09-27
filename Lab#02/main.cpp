#include<iostream>
#include <string>
#include "Employee.h"
#include "BankAccount.h"
#include "Rectangle.h"
#include "Locker.h"

using namespace std;


// Task 1 
//int main () {
//
//    // creating object using default constructor
//	Employee e;
//
//    //displaying employee details 
//	e.displayDetails(); 
//	
	
//}

//Task 4
//int main () {
//
//	//creating object inside a block (stack)	
//	 {
//	 	Locker locker1;
//	 	
//	 }
//	 cout << "--------------------------------" <<endl;
//
//	 //heap allocation
//	 Locker* locker2 = new Locker();
//     delete locker2;
//	
//}

//Task 3
//int main () {
//	
//	
//	Rectangle rec1;
//	cout << "Rectangle 1 (Default Constructor): " << endl;
//	rec1.display ();
//
//	Rectangle rec2( 4.0 , 2.5 );
//	cout << "Rectangke 2 (Parameterized Constructor): " << endl;
//	rec2.display ();
//	
//	Rectangle rec3( 5.0 );
//	cout << "Rectangke 3 (single_Parameterized Constructor_Square): " << endl;
//	rec3.display ();
//	
//
//	
//}

//Task 2
int main () {

	//creating object with user_defined values
	BankAccount b ("Pk89030008983" , "Feeza" , 1000 );

   //displaying account details
	b.showAccountDetails();
	
}

