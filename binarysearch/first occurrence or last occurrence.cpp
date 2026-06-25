// Binary Search Logic

int s = 0;
int e = n - 1;

int ans = -1;

while(s <= e) {

    // (A) Find Mid
    int mid = (s + e) / 2;

    // (B) Check Mid
    if(arr[mid] == target) {

        // may or may not be final answer
        ans = mid;
    }

    // (C) Move Left or Right
    if(target < arr[mid]) {

        // go to left part
        e = mid - 1;
    }
    else {

        // go to right part
        s = mid + 1;
    }
}

// return answer
return ans;