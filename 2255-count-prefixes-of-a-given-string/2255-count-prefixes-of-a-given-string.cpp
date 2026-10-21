class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        int n=words.size();
        for(int i=0; i<n;i++){
            if(s.find(words[i])==0)
            count++;
        }
        return count;
    }
};