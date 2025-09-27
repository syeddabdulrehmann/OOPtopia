C++ Exception Handling and Templates

This project demonstrates four tasks using exception handling, arrays, templates, and modular programming with header files in C++.

📌 Task Overview

Task 1: Division with Exception Handling

A simple divide() function is created.

It throws a runtime_error if the divisor is 0.

Demonstrates exception handling using try-catch.

Task 2: Array with Bounds Checking

A fixed-size array of 3 integers initialized to 0.

The user enters an index and a value.

If the index is out of range (<0 or >=3), an exception is thrown.

Otherwise, the value is stored and displayed.

Task 3: Calculator Template

A templated calculator class implemented in calculator.h.

Supports:

Addition

Subtraction

Multiplication

Division (with exception handling for divide-by-zero).

Demonstrates generic programming with templates.

Task 4: Logger Template

A templated logger class implemented in logger.h.

Logs messages of any data type to the console.

Used to log exceptions and program events.
