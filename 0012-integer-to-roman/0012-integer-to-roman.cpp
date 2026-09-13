class Solution {
public:
    string intToRoman(int num) {
    map<int , string , greater<int>>m;
       m[1]="I";
       m[5]="V";
       m[4]="IV";
       m[10]="X";
       m[9]="IX";
       m[50]="L";
       m[40]="XL";
       m[100]="C";
       m[90]="XC";
       m[500]="D";
       m[400]="CD";
       m[1000]="M";
       m[900]="CM";
       string ans="";
       for(auto it:m){
        while(num>=it.first){
            ans+=it.second;
            num-=it.first;
        }
       }
       return ans;
    }
};