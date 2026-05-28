class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size() - 1; i >= 0; i--) {

            // If digit is less than 9
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // If digit is 9
            digits[i] = 0;
        }

        // Case like 999 -> 1000
        digits.insert(digits.begin(), 1);

        return digits;
    }
};