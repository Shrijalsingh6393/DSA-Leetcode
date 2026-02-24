class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int cs = 0;
        for(int i=0;i<k;i++){
            cs += arr[i];
        }
        // int avg = 0;
        int j = 0;
        int count = 0;
        if(cs/k>=threshold){count++;}
        for(int i=k;i<n;i++){
            cs += arr[i];
            cs -= arr[j]; 
            if(cs/k>=threshold){
                count++;
            }
            j++;
        }
        return count;
    }
};