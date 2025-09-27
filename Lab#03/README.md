BankAccount and Inheritance Tasks – C++ OOP

This project demonstrates important Object-Oriented Programming (OOP) concepts in C++ through four structured tasks, each focusing on constructors, memory management, and inheritance.

Task 1: Copy Constructor – Shallow Copy

Objective:

To demonstrate the issue of shallow copying when a class contains dynamically allocated memory.

Description:

A BankAccount class is created using a pointer to store the balance.
Memory is allocated dynamically in the constructor.
The default copy constructor is used to copy an object.
Modifying the copied object affects the original due to shared memory.
The program shows undefined behavior when the destructor is called twice on the same memory location.

Task 2: Copy Constructor – Deep Copy

Objective:

To fix the shallow copy issue by implementing a deep copy constructor.

Description:

The BankAccount class is updated to include a deep copy constructor.
Each object now gets its own separate copy of the balance.
After copying and modifying one object, the original object remains unaffected.
The destructor safely deletes the memory, avoiding double deletion or runtime errors.

Task 3: Single Inheritance

Objective:

To demonstrate how single inheritance works in C++.

Description:

A base class Person contains name and age.
A derived class Student adds a roll number and inherits from Person.
The derived class uses base class functions to manage and display data.
Shows how derived classes can reuse base class logic using inheritance.

Task 4: Constructor in Inheritance

Objective:

To demonstrate constructor call order in inheritance.

Description:

A base class Shape and a derived class Rectangle are implemented.
Constructors are defined in both classes.
When an object of Rectangle is created, the base class constructor is called first automatically.
This task explains constructor chaining in inheritance.
How to Run
Open any C++ IDE (Dev-C++, Code::Blocks, etc.).
Copy the code for each task into a separate .cpp file.
Compile and run each file to observe the output.
These examples are portable and do not require any platform-specific libraries
