class Solution {
public:
    bool checkD(vector<int>& position, int minD, int number) {
        int cnt = 1;
        int last = position[0];

        for (int i = 1; i < position.size(); i++) {
            if (position[i] - last >= minD) {
                cnt++;
                last = position[i];
            }
            if (cnt >= number) return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int low = 1;
        int high = position.back() - position.front();

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (checkD(position, mid, m))
                low = mid + 1;
            else
                high = mid - 1;
        }

        return high;
    }
};