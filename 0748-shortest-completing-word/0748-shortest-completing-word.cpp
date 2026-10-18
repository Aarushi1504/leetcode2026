class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int n = licensePlate.length();
        string r = "";
        for (int i = 0; i < n; i++) {
            if (isalpha(licensePlate[i])) {
                r += tolower(licensePlate[i]);
            }
        }
        map<char, int> f1;
        for (char ch : r) {
            f1[ch]++;
        }
        string ans = "";
        for (string word : words) {
            map<char, int> f2;
            for (char ch : word) {
                f2[ch]++;
            }
            bool valid = true;
            for (auto it : f1) {
                char ch = it.first;
                int r = it.second;
                if (f2[ch] < r) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                if (ans == "" || word.length() < ans.length()) {
                    ans = word;
                }
            }
        }
        return ans;
    }
};