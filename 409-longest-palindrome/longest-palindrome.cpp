class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(auto i:s)
        {
            mp[i]++;
        }   
        int count=0;
        bool flag=false;
        for(auto i:mp)
        {
            count+=i.second/2;
            if(i.second%2==1) flag=true;
        }
        if(flag) return 1+count*2;
        return count*2;
    }
};