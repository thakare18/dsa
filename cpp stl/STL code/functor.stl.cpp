// Function Objects (Functors) in C++ STL
// A function object is an object that can be used as a function.

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    // Array of integers
    int arr[] = {1, 73, 4, 2, 54, 7};

    // Sorting in ascending order (default)
    sort(arr, arr + 6);

    cout << "Ascending Order: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Sorting in descending order using function object
    sort(arr, arr + 6, greater<int>());

    cout << "Descending Order: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}


// Common STL Function Objects
// Functor	Purpose
// greater<int>()	Descending order
// less<int>()	Ascending order
// plus<int>()	Addition
// minus<int>()	Subtraction
// multiplies<int>()	Multiplication
// divides<int>()	Division