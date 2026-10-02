class Solution {
public:
    bool possible(vector<int>& weights, int mid, int days) {
        int countDays = 1;
        int currentWeight = 0;

        for (int weight : weights) {
            if (currentWeight + weight <= mid) {
                currentWeight += weight;
            }
            else {
                countDays++;
                currentWeight = weight;
            }
        }

        return countDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;

        for (int weight : weights) {
            low = max(low, weight);
            high += weight;
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(weights, mid, days)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};