class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

        unordered_map<char, int> mpp;

        // Store positions
        for (int i = 0; i < order.size(); i++) {
            mpp[order[i]] = i;
        }

        // Compare adjacent words
        for (int i = 0; i < words.size() - 1; i++) {

            string w1 = words[i];
            string w2 = words[i + 1];

            int j = 0;

            // Must be while, not if
            while (j < w1.size() && j < w2.size()) {

                if (w1[j] != w2[j]) {

                    if (mpp[w1[j]] > mpp[w2[j]]) {
                        return false;
                    }

                    break;
                }

                j++;
            }

            // Prefix case
            if (j == w2.size() && w1.size() > w2.size()) {
                return false;
            }
        }

        return true;
    }
};