class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1);
        long long value = 1;
        
        for (int i = 0; i <= rowIndex; i++) {
            row[i] = value;
            value = value * (rowIndex - i) / (i + 1);
        }
        
        return row;
    }
};