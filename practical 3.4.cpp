#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
T findMax(T arr[], int size)
{
    T maxVal = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (maxVal < arr[i])
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T>
void reverseArray(T arr[], int size)
{
    reverse(arr, arr + size);
}

template <typename T>
void display(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int intArr[50];
    float floatArr[50];
    char charArr[50];
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter " << size << " elements for integer array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> intArr[i];
    }

    cout << "Enter " << size << " elements for float array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> floatArr[i];
    }

    cout << "Enter " << size << " elements for character array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> charArr[i];
    }

    cout << "\nInteger Array: ";
    display(intArr, size);
    cout << "Max is: " << findMax(intArr, size) << endl;
    reverseArray(intArr, size);
    cout << "Reversed Integer Array: ";
    display(intArr, size);

    cout << "\nFloating Array: ";
    display(floatArr, size);
    cout << "Max is: " << findMax(floatArr, size) << endl;
    reverseArray(floatArr, size);
    cout << "Reversed Float Array: ";
    display(floatArr, size);

    cout << "\nCharacter Array: ";
    display(charArr, size);
    cout << "Max is: " << findMax(charArr, size) << endl;
    reverseArray(charArr, size);
    cout << "Reversed Character Array: ";
    display(charArr, size);

    return 0;
}
