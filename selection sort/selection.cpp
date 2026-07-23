#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    std::vector<int> data = {64, 25, 12, 22, 11};
    selectionSort(data);
    std::cout << "Sorted array: ";
    for (const auto& elem : data) {
        std::cout << elem << " ";
    }
    return 0;
}