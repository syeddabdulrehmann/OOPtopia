#include <iostream>
using namespace std;

class Rectangle {
	
	float length;
	float width;
	
	
	public:
	
	//default constructor	
	Rectangle () {
	
	length = 1.0;
    width = 1.0;	
		
	}
	
	//parameterized constructor 
	Rectangle ( float l , float w ) {
		
		length = l;
        width = w;
		
	}
	
	//single_paramterized constructor
	Rectangle ( float side ) {
		
	length = side;
    width = side;
		
	}
	
	//method to calculatec area
	float area () {
		
		return length * width ;
	}
    
    //method to display members
    void display () {
    	
    	cout << "===========================" <<endl;
		cout << "    Rectangle Details       " <<endl;
		cout << "===========================" <<endl;
		cout << "Length: " << length <<  "units" << endl;
		cout << "Width: " << width <<   "units" << endl;
		cout << "Area: " << area () << "sq. units" << endl;
		cout << endl;
		
	}
	
	
    
};
