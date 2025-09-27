Static Members in C++

This project demonstrates the use of static data members and static member functions in C++.

The code is divided into two header files for clarity, and a single main.cpp is used to execute both tasks.


📁 Project Structure

Task1_StaticDataMember.h # Example of static data member
Task2_StaticMemberFunction.h # Example of static member function
main.cpp # Executes both tasks


📌 Task Descriptions

🔹 Task 1: Static Data Member

Declared inside the class but defined outside.

Shared among all objects of the class.

Incremented whenever an object is created.

🔹 Task 2: Static Member Function

Can only access static data members.

Does not have the this pointer.

Called using the class name.

📊 Example Output


=== Task 1: Static Data Member === Total objects of class A created so far: 3


=== Task 2: Static Member Function === Total objects created so far: 3



✅ Learning Outcome How static data members are shared among objects.


How static member functions work and why they are useful.

