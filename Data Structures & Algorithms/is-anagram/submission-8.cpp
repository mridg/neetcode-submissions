class Solution {
public:
    bool isAnagram(string s, string t) {
        // some quick return cases
        if (s == t) { 
            return true;
        } else if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> ess, tee;

        for (int i = 0; i < s.length(); i++) {
            auto sinsert = ess.insert({s[i], 1});
            auto tinsert = tee.insert({t[i], 1});

            if (!sinsert.second) {
                ess[s[i]] += 1;
            }

            if (!tinsert.second) {
                tee[t[i]] += 1;
            }
        }

        return (ess == tee);
    }
};
