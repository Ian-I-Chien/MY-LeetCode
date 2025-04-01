class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) {
            return true;
        }
        if (x < 0) {
            return false;
        }
        int reverse = 0;
        int temp_x = x;
        while (x != 0) {
            std::cout << "x: " << x << std::endl;
            if (reverse > INT_MAX / 10) {
                return false;
            }
            reverse = x % 10 + reverse * 10;
            std::cout << "reverse: " << reverse  << std::endl;
            x = x/10;
        }
        return reverse == temp_x;
    }
};

