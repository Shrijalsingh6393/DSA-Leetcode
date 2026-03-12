class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        vector<int> count(10, 0);

        for(int i = 0; i < secret.size(); i++)
        {
            if(secret[i] == guess[i])
                bulls++;
            else
                count[secret[i] - '0']++;
        }

        for(int i = 0; i < guess.size(); i++)
        {
            if(secret[i] != guess[i] && count[guess[i] - '0'] > 0)
            {
                cows++;
                count[guess[i] - '0']--;
            }
        }

        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};