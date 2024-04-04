class Solution {
public:
    int maxDepth(string s) {
        int ct=0,ans=0;
        for(auto &it:s){
            if(it=='('){
                ct++;
                ans=max(ans,ct);
            }
            else if(it==')'){
                ct--;
            }
        }
        return ans;
    }
};