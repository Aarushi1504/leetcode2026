class Solution {
public:
    bool isValid(string s) {
        if(s.length()<3)
        return false;
        bool v=false;
        bool c=false;
        for(int i=0; i<s.length();i++){
            if (!isalnum(s[i]))
            return false;
            else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v=true;
            else if(isalpha(s[i]))
            c=true;
        }
        return c&&v;
    }
};