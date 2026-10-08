class Solution {
public:
    bool digitCount(string num) {
        int n=num.length();
        int count[10]={0};
        for(char ch:num){
            count[ch-'0']++;
        }
        for(int i=0; i<n; i++){
            if(count[i]!=(num[i]-'0'))
            return false;
        }
        return true;
    }
};