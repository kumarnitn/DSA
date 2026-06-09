class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string word;
        stringstream ss(s);

        while(ss >> word)
            words.push_back(word);

        if(words.size() != pattern.size())
            return false;

        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        for(int i = 0; i < pattern.size(); i++) {

            char ch = pattern[i];
            string w = words[i];

            if(p2w.count(ch)) {
                if(p2w[ch] != w)
                    return false;
            }
            else {
                p2w[ch] = w;
            }

            if(w2p.count(w)) {
                if(w2p[w] != ch)
                    return false;
            }
            else {
                w2p[w] = ch;
            }
        }

        return true;
    }
};