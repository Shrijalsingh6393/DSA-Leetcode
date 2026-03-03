class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        
        if(s.empty() || words.empty()) return result;
        
        int wordLen = words[0].length();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;
        
        unordered_map<string, int> wordFreq;
        for(string &word : words) {
            wordFreq[word]++;
        }
        
        // We try all possible starting offsets
        for(int i = 0; i < wordLen; i++) {
            unordered_map<string, int> windowFreq;
            int left = i;
            int count = 0;
            
            for(int right = i; right + wordLen <= s.length(); right += wordLen) {
                
                string word = s.substr(right, wordLen);
                
                if(wordFreq.find(word) != wordFreq.end()) {
                    
                    windowFreq[word]++;
                    count++;
                    
                    // If word frequency exceeds allowed, shrink window
                    while(windowFreq[word] > wordFreq[word]) {
                        string leftWord = s.substr(left, wordLen);
                        windowFreq[leftWord]--;
                        left += wordLen;
                        count--;
                    }
                    
                    // If all words matched
                    if(count == wordCount) {
                        result.push_back(left);
                    }
                }
                else {
                    // reset window
                    windowFreq.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }
        return result;
    }
};