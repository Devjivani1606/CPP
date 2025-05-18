#include <iostream>
#include <vector>
#include <memory>  // For smart pointers
#include <cmath>   // For M_PI

using namespace std;

// Abstract base class
class Shape {
public:
    virtual double Area() const = 0;  // Pure virtual function
    virtual void display() const = 0;
    virtual ~Shape() {}  // Virtual destructor
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double Area() const override {
        return length * width;
    }

    void display() const override {
        cout << "Rectangle Area: " << Area() << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double Area() const override {
        return M_PI * radius * radius;
    }

    void display() const override {
        cout << "Circle Area: " << Area() << endl;
    }
};

// Main program
int main() {
    vector<Shape*> shapes;  // Collection of Shape pointers

    // Add different shapes dynamically
    shapes.push_back(new Rectangle(10, 5));
    shapes.push_back(new Circle(7));
    shapes.push_back(new Rectangle(4, 3));
    shapes.push_back(new Circle(2.5));

    // Display all areas via base class pointer (polymorphism)
    cout << "Displaying Shape Areas:\n";
    for (Shape* shape : shapes) {
        shape->display();
    }

    // Free allocated memory
    for (Shape* shape : shapes) {
        delete shape;
    }
    shapes.clear();

    return 0;
}

