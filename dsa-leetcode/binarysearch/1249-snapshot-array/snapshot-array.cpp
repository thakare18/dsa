class SnapshotArray {
public:
    vector<vector<pair<int, int>>> arr;
    int snapId;

    SnapshotArray(int length) {
        arr.resize(length);
        snapId = 0;

        // Initialize every index with value 0 at snapshot ID 0.
        for(int i = 0; i < length; i++) {
            arr[i].push_back({0, 0});
        }
    }

    void set(int index, int val) {
        // If the index was already updated in the current snapshot,
        // update its existing value instead of creating a new entry.
        if(arr[index].back().first == snapId) {
            arr[index].back().second = val;
        }
        else {
            // Store the new value along with the current snapshot ID.
            arr[index].push_back({snapId, val});
        }
    }

    int snap() {
        // Return the current snapshot ID and then move to the next snapshot.
        return snapId++;
    }

    int get(int index, int snap_id) {
        int low = 0;
        int high = arr[index].size() - 1;
        int answer = 0;

        // Use binary search to find the latest value recorded
        // at or before the requested snapshot ID.
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(arr[index][mid].first <= snap_id) {
                // This snapshot is valid, so store its value as the answer.
                answer = arr[index][mid].second;

                // Search on the right for a more recent valid snapshot.
                low = mid + 1;
            }
            else {
                // This snapshot is too recent, so search on the left side.
                high = mid - 1;
            }
        }

        return answer;
    }
};