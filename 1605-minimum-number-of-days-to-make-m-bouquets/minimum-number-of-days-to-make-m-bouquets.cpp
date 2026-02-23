class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k, int day) {
        int count = 0;
        int bouquets = 0;

        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = (long long)m*k;
        if(total>bloomDay.size()) return -1;
        int low = 1;
        int high = 0;

        for(int i=0;i<bloomDay.size();i++){
            high = max(high, bloomDay[i]);
        }

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canMake(bloomDay, m, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};