class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size() - 1;
        int i = 0;
        while (n > i) {
            swap(s[n], s[i]);
            i++;
            n--;
        }
    }
};