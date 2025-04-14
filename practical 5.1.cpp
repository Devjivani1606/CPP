//This program is prepared by 24ce043_Dev
#include <iostream>
#include <vector>

using namespace std;

class Calculator {
public:
    double add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    double add(int a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    vector<double> resultVec;
    resultVec.push_back(c.add(20, 50));
    resultVec.push_back(c.add(2.6, 9.8));
    resultVec.push_back(c.add(20, 7.5));

    cout << "Results using STL vector:" << endl;
    for (size_t i = 0; i < resultVec.size(); i++) {
        cout << "Result " << i + 1 << ": " << resultVec[i] << endl;
    }

    const int n = 3;
    double resultArr[n];
    resultArr[0] = c.add(10, 15);
    resultArr[1] = c.add(1.5, 2.5);
    resultArr[2] = c.add(7, 3.3);

    cout << "\nResults using array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Result " << i + 1 << ": " << resultArr[i] << endl;
    }
    cout<<"\n24CE043_Dev\n";

    return 0;
}
