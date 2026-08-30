class Solution {
public:
    int square(int n){
       int square=n*n;
       return square;
    }
    bool isHappy(int n) {
         set<int> seen;
        while (n != 1) {

            if (seen.count(n)) {
                return false;
            }

            seen.insert(n);

            int sum = 0;

            while (n > 0) {
                int digit = n % 10;
                sum = sum + square(digit);
                n = n / 10;
            }

            n = sum;
        }

        return true;
    }
};