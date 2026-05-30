class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        
        for (char ch : s)
            freq[ch]++;
        
        int length = 0;
        bool oddFound = false;
        
        for (auto &p : freq) {
            if (p.second % 2 == 0) {
                length += p.second;
            } else {
                length += p.second - 1;
                oddFound = true;
            }
        }
        
        if (oddFound) length++;
        
        return length;
    }
};