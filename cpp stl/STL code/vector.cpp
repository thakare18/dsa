// C++ STL Vector Example
// Demonstrates all basic vector operations with comments

#include <iostream> // For input/output
#include <vector>   // For std::vector
using namespace std;

// Function to display vector elements
void display(vector<int> v)
{
    cout << "Vector: ";

    // Traverse vector using range-based for loop
    for (auto element : v)
    {
        cout << element << " ";
    }

    cout << endl;
}

int main()
{
    // ==========================
    // Vector Initialization
    // ==========================

    vector<int> v = {1, 2, 3, 4};

    cout << "Initial Vector:" << endl;
    display(v);

    // ==========================
    // push_back()
    // Adds element at the end
    // ==========================

    v.push_back(5);

    cout << "\nAfter push_back(5):" << endl;
    display(v);

    // ==========================
    // insert()
    // Insert element at a specific position
    // ==========================

    // Insert 100 at beginning
    v.insert(v.begin(), 100);

    cout << "\nAfter insert(100) at beginning:" << endl;
    display(v);

    // ==========================
    // Accessing Elements
    // ==========================

    cout << "\nElement at index 0: "
         << v[0] << endl;

    // ==========================
    // at()
    // Safer way to access elements
    // ==========================

    cout << "Element at index 2 using at(): "
         << v.at(2) << endl;

    // ==========================
    // Updating Elements
    // ==========================

    v[1] = 50;

    cout << "\nAfter updating index 1 to 50:" << endl;
    display(v);

    // ==========================
    // pop_back()
    // Removes last element
    // ==========================

    v.pop_back();

    cout << "\nAfter pop_back():" << endl;
    display(v);

    // ==========================
    // erase()
    // Removes element at a specific position
    // ==========================

    v.erase(v.begin());

    cout << "\nAfter erase(first element):" << endl;
    display(v);

    // ==========================
    // size()
    // Returns number of elements
    // ==========================

    cout << "\nSize of vector: "
         << v.size() << endl;

    // ==========================
    // empty()
    // Checks whether vector is empty
    // ==========================

    if (v.empty())
        cout << "Vector is empty" << endl;
    else
        cout << "Vector is not empty" << endl;

    // ==========================
    // clear()
    // Removes all elements
    // ==========================

    v.clear();

    cout << "\nAfter clear():" << endl;
    cout << "Size = " << v.size() << endl;

    return 0;
}


// Important Vector Functions
// Function	Purpose
// push_back(x)	Add element at end
// insert(it, x)	Insert element at iterator position
// pop_back()	Remove last element
// erase(it)	Remove element at iterator position
// v[i]	Access element using index
// at(i)	Safe access element
// size()	Returns number of elements
// empty()	Checks if vector is empty
// clear()	Removes all elements
// begin()	Iterator to first element
// end()	Iterator after last element
// Why Vector is Fast?
// Elements are stored in contiguous memory locations.
// Random access using v[i] is O(1).
// push_back() is generally O(1).
// Insertion/deletion in the middle is O(n) because elements must be shifted.