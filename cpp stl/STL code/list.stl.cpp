// C++ STL List Example
// Demonstrates all basic list operations with comments

#include <iostream> // For input/output
#include <list>     // For std::list
using namespace std;

// Function to display all elements of a list
void display(list<int> l)
{
    cout << "List: ";

    // Traverse the list using range-based for loop
    for (auto element : l)
    {
        cout << element << " ";
    }

    cout << endl;
}

int main()
{
    // Creating and initializing a list
    list<int> l = {1, 2, 3, 4};

    cout << "Initial List:" << endl;
    display(l);

    // ==========================
    // push_back()
    // Adds element at the end
    // ==========================
    l.push_back(5);

    cout << "\nAfter push_back(5):" << endl;
    display(l);

    // ==========================
    // push_front()
    // Adds element at the beginning
    // ==========================
    l.push_front(0);

    cout << "\nAfter push_front(0):" << endl;
    display(l);

    // ==========================
    // insert()
    // Insert element at a specific position
    // ==========================

    // Iterator pointing to beginning
    auto it = l.begin();

    // Move iterator to index 2
    it++;
    it++;

    // Insert 100 before iterator position
    l.insert(it, 100);

    cout << "\nAfter insert(100) at index 2:" << endl;
    display(l);

    // ==========================
    // Accessing element
    // Lists do not support indexing
    // We must use iterators
    // ==========================

    auto itr = l.begin();

    itr++;
    itr++;

    cout << "\nElement at index 2: "
         << *itr << endl;

    // ==========================
    // pop_back()
    // Removes last element
    // ==========================
    l.pop_back();

    cout << "\nAfter pop_back():" << endl;
    display(l);

    // ==========================
    // pop_front()
    // Removes first element
    // ==========================
    l.pop_front();

    cout << "\nAfter pop_front():" << endl;
    display(l);

    // ==========================
    // erase()
    // Removes element from a specific position
    // ==========================

    auto del = l.begin();

    del++;
    del++;

    // Delete element at index 2
    l.erase(del);

    cout << "\nAfter erase(index 2):" << endl;
    display(l);

    return 0;
}