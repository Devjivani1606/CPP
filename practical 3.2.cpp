//This program is prepared by 24ce043_Dev

#include <iostream>
#include <vector>

using namespace std;

// Sum using vector (your original method)
int printSum(int arr[], int size, int sum = 0) {
    vector<int> vec;

    for (int i = 0; i < size; i++) {
        vec.push_back(arr[i]);
    }

    for (int x : vec) {
        sum += x;
    }

    return sum;
}

// ✅ Sum using recursion
int recursiveSum(int arr[], int size) {
    if (size == 0)
        return 0;
    return arr[0] + recursiveSum(arr + 1, size - 1);
}

int main() {
    int size, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Sum using vector + loop
    sum = printSum(arr, size);
    cout << "\n[Using Vector] Sum of elements: " << sum << endl;

    // Sum using recursion
    int recSum = recursiveSum(arr, size);
    cout << "[Using Recursion] Sum of elements: " << recSum << endl;

    cout<<"\n24CE043_Dev\n";

    return 0;
}
