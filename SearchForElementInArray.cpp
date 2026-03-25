#include <iostream>
#include <vector>
using namespace std;

int searchElementInArray(vector<int>& nums, int target) {
    
    int size = nums.size();

    for(int i = 0; i < size; i++) {
        int value = nums[i];

        if(value == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {15, 25, 35, 45, 50};
    int target = 45;

    int index = searchElementInArray(nums, target);

    cout << index;

    return 0;
}