class Solution {
public:
    bool solve(string &s, int i, int j) {

        if (i >= j) return true;
        if (s[i] != s[j]) return false;

        return solve(s, i + 1, j - 1);
    }

    bool isPalindrome(string s) {
        
        string temp = "";
        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }

        return solve(temp, 0, temp.size() - 1);
    }
};