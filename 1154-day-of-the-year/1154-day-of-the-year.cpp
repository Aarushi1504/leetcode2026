class Solution {
public:
    int dayOfYear(string date) {
        int dm, td = 0;
        int d = (date[8] - '0') * 10 + (date[9] - '0');
        int m = (date[5] - '0') * 10 + (date[6] - '0');
        int year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 +
                (date[2] - '0') * 10 + (date[3] - '0');
        for (int i = 1; i < m; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 ||
                i == 12) {
                td += 31;
            } else if (i == 2) {
                td += 28;
            } else {
                td += 30;
            }
        }
        td += d;
        if((year %400==0 || (year %4==0 && year %100!=0)) && m>2){
            td+=1;
        }
        return td;
    }
};