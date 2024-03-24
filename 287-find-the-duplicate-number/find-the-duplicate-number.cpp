class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

       
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};


//second approach using maps

class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second>1){
                return i.first;
            }
        }
        return -1;
    }
};
