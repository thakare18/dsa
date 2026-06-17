// C++ STL Map Example
// Demonstrates all basic map operations with comments

#include <iostream>
#include <map>
using namespace std;

// Function to display map elements
void display(map<string, int> m)
{
    cout << "Map Elements:" << endl;

    // Traverse map
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << endl;
}

int main()
{
    // ==========================
    // Map Initialization
    // ==========================

    map<string, int> m = {
        {"Harry", 2},
        {"Rohan", 4}
    };

    cout << "Initial Map:" << endl;
    display(m);

    // ==========================
    // Insertion using []
    // ==========================

    m["Coder"] = 3;

    cout << "After m[\"Coder\"] = 3 :" << endl;
    display(m);

    // ==========================
    // Insertion using insert()
    // ==========================

    m.insert({"Rahul", 5});

    cout << "After insert({\"Rahul\",5}) :" << endl;
    display(m);

    // ==========================
    // Accessing Elements
    // ==========================

    cout << "Value of Harry = "
         << m["Harry"] << endl;

    // ==========================
    // Updating Elements
    // ==========================

    m["Harry"] = 10;

    cout << "\nAfter updating Harry :" << endl;
    display(m);

    // ==========================
    // erase(key)
    // Removes element using key
    // ==========================

    m.erase("Coder");

    cout << "After erase(\"Coder\") :" << endl;
    display(m);

    // ==========================
    // erase(iterator)
    // Removes first element
    // ==========================

    m.erase(m.begin());

    cout << "After erase(m.begin()) :" << endl;
    display(m);

    // ==========================
    // size()
    // Returns number of elements
    // ==========================

    cout << "Size of map = "
         << m.size() << endl;

    // ==========================
    // find()
    // Searches for a key
    // ==========================

    if (m.find("Rohan") != m.end())
        cout << "Rohan Found" << endl;
    else
        cout << "Rohan Not Found" << endl;

    // ==========================
    // empty()
    // Checks whether map is empty
    // ==========================

    if (m.empty())
        cout << "Map is Empty" << endl;
    else
        cout << "Map is Not Empty" << endl;

    // ==========================
    // clear()
    // Removes all elements
    // ==========================

    m.clear();

    cout << "\nAfter clear() :" << endl;
    cout << "Size = " << m.size() << endl;

    return 0;
}



// | Function              | Purpose                       |
// | --------------------- | ----------------------------- |
// | `m[key]`              | Insert/Access/Update value    |
// | `insert({key,value})` | Insert key-value pair         |
// | `erase(key)`          | Remove element using key      |
// | `erase(iterator)`     | Remove element using iterator |
// | `find(key)`           | Search key                    |
// | `size()`              | Number of elements            |
// | `empty()`             | Check if map is empty         |
// | `clear()`             | Remove all elements           |
// | `begin()`             | Iterator to first element     |
// | `end()`               | Iterator after last element   |
