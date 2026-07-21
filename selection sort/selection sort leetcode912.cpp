#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr, int n) {

    // Traverse the array
    for(int i = 0; i < n - 1; i++) {

        // Assume current index has minimum element
        int minIndex = i;

        // Find the minimum element
        for(int j = i + 1; j < n; j++) {

            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Place minimum element at correct position
        swap(arr[minIndex], arr[i]);
    }
}

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted Array: ";

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}