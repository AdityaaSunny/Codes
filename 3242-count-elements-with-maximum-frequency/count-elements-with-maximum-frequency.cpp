class Solution {
public:
    int maxFrequencyElements(std::vector<int>& nums) {
       unordered_map<int, int> mp;
        int maxf = 0;
        for (int num : nums) {
            mp[num]++;
            maxf = max(maxf, mp[num]);
        }

        int maxEleCount = 0;
        for (auto entry : mp) {
            int currEleCount = entry.second;
            if (currEleCount == maxf) {
                maxEleCount++;
            }
        }
        return maxf* maxEleCount;
    }
};