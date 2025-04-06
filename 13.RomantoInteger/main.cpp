class Solution {
public:
    int romanToInt(string s) {
        std::cout << s.size() << std::endl;
        int result = 0;
        int prev = INT_MAX;
        int curr = 0;
        for (int i = 0; i < s.size(); i ++) {
            if (s[i] == 'I') curr = 1;
            if (s[i] == 'V') curr = 5;
            if (s[i] == 'X') curr = 10;
            if (s[i] == 'L') curr = 50;
            if (s[i] == 'C') curr = 100;
            if (s[i] == 'D') curr = 500;
            if (s[i] == 'M') curr = 1000;

            result += curr;

            if (curr > prev) {
                result -= prev * 2;
            } else {
                prev = curr;
            }
        }
        return result;
    }
};
