#include <iostream>

using namespace std;

// Function to calculate sum of digits of a number
long long digitSum(long long num) {
    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Recursive function to compute the super digit
long long superDigit(long long num) {
    if (num < 10) return num;  // Base case: single-digit number
    return superDigit(digitSum(num));
}

int main() {
    string n;
    int k;

    cout << "Enter the number n: ";
    cin >> n;
    cout << "Enter the repetition count k: ";
    cin >> k;

    long long initialSum = 0;
    for (char digit : n) {
        initialSum += digit - '0';
    }

    long long result = superDigit(initialSum * k);
    cout << "Super Digit: " << result << endl;

    return 0;
}

