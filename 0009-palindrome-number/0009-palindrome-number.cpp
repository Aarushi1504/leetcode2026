class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int num = x;
        long long rev = 0;
        int d;
        while (x > 0) {
            d = x % 10;
            rev = rev * 10 + d;
            x = x / 10;
        }
        if (num == rev)
            return true;
        else
            return false;
    }
};