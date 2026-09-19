#include <vector>

class Solution {
public:
    int countArrangement(int n) {
        std::vector<int> memo(1 << n, -1);
        return backtrack(1, 0, n, memo);
    }

private:
    int backtrack(int index, int mask, int n, std::vector<int>& memo) {
        // Base case: successfully placed all numbers from 1 to n
        if (index > n) {
            return 1;
        }

        // Return cached result if this subset of numbers has already been processed
        if (memo[mask] != -1) {
            return memo[mask];
        }

        int count = 0;

        // Try placing every available number at the current index
        for (int num = 1; num <= n; ++num) {
            int bit = 1 << (num - 1);
            
            // Check if the number has NOT been used yet (bit is 0)
            if (!(mask & bit)) {
                // Check the beautiful arrangement conditions
                if (num % index == 0 || index % num == 0) {
                    // Recurse to the next position, setting the bit for the chosen number
                    count += backtrack(index + 1, mask | bit, n, memo);
                }
            }
        }

        // Cache and return the result for the current bitmask state
        return memo[mask] = count;
    }
};
