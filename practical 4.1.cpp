//This program is prepared by 24ce043_Dev
#include <iostream>
#include <vector>
using namespace std;

class shape {
protected:
    double radius;

public:
    shape(double r) {
        radius = r;
    }

    double getradius() {
        return radius;
    }

    double calculateArea() {
        return 0.0;
    }
};

class circle : public shape {
public:
    circle(double r) : shape(r) {}

    double calculateCircleArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    int numcircles;
    vector<circle> circles;

    cout << "How many circles do you want to input: ";
    cin >> numcircles;

    for (int i = 0; i < numcircles; i++) {
        double radius;
        cout << "Enter the radius of circle " << i + 1 << ":" << endl;
        cin >> radius;
        circles.push_back(circle(radius));
    }

    for (int i = 0; i < circles.size(); i++) {
        cout << "Circle " << i + 1 << " with radius " << circles[i].getradius()
             << " has area: " << circles[i].calculateCircleArea() << endl;
    }
    cout<<"\n24CE043_Dev\n";

    return 0;
}
