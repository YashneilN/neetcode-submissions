class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ch(26, 0);
        int m = s.size();
        int n = t.size();

        if(m != n) return false;

        for(int i = 0; i < m; i++)
        {
            ch[s[i] - 'a']++;
            ch[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++)
        {
            if(ch[i] != 0) return false;
        }

        return true;
    }
};
