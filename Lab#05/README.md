Aggregation vs Composition in C++

This project demonstrates the concepts of Aggregation and Composition in C++ using simple examples with a Calculator, Students, and a Display class.

📂 Project Structure

aggregation.h # Aggregation Task classes
composition.h # Composition Task classes
main.cpp # Main program using both tasks 
README.md # Project documentation

🔹 Task 1: Aggregation

Scenario:

In a classroom, multiple students solve math problems using a shared calculator provided by the teacher.

The calculator is not owned by any student.
Students just use (refer to) the same calculator.

Implementation:

SharedCalculator provides add and multiply.
Student has a reference (SharedCalculator*) to use the calculator.

🔹 Task 2: Composition

Scenario:

A calculator can perform operations like addition and multiplication but also needs a display to show results.

The calculator owns the display object.
Without the calculator, the display cannot exist.

Implementation:

Display stores and shows the last result.
Calculator has a Display as a member object.

▶️ How to Run

Create the files:

aggregation.h
composition.h
main.cpp

Compile and run:

g++ main.cpp -o program
./program
