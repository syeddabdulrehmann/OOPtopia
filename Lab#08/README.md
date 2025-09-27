C++ OOP 
Examples: Pure Virtual Functions & Friend Functions

This project demonstrates two fundamental Object-Oriented Programming (OOP) concepts in C++:


Polymorphism with Pure Virtual Functions

Friend Functions for Accessing Private Members

📂 Project Structure

Shape.h # Abstract class Shape + Derived classes (CircleShape, RectangleShape) 
FriendExample.h # Classes (FriendCircle, FriendRectangle) + Friend Function totalArea()
main.cpp # Runs both examples 
README.md # Documentation


🚀 Features

Task 1: Pure Virtual Function Example

Defines an abstract base class Shape with a pure virtual function draw().

Implements two derived classes:

CircleShape

RectangleShape

Demonstrates polymorphism by overriding draw() in each derived class.

Output Example: ----- Task 1: Pure Virtual Function Example ----- Drawing a circle Drawing a rectangle


Task 2: Friend Function Example

Defines two classes:

FriendCircle (with radius)

FriendRectangle (with length & width)

Uses a friend function totalArea() that:

Can access private data of both classes

Calculates the total area of the circle and rectangle

Formula Used: Total Area = π * r² + length * width


Output Example: ----- Task 2: Friend Function Example ----- Total area = 428.0


📘 Concepts Covered Abstract Classes & Pure Virtual Functions


Function Overriding & Polymorphism


Friend Functions


Access Modifiers (private, public)


Code Organization with Header Files

