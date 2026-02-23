class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int dayCount = 1;
        int currentLoad = 0;

        for (int i = 0; i < weights.size(); i++) {
            if (currentLoad + weights[i] <= capacity) {
                currentLoad += weights[i];
            } else {
                dayCount++;
                currentLoad = weights[i];
            }
        }

        return dayCount <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0;

        for (int i = 0; i < weights.size(); i++) {
            low = max(low, weights[i]);   // max weight
            high += weights[i];           // total sum
        }

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, days, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};