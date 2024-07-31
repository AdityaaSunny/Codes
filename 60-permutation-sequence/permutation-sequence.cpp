class Solution {
public:
    string getPermutation(int n, int k) {
        string s= "";
        for(int i=1;i<=n;i++){
            s+=to_string(i);
        }
        int count=1;
        if(k==1){
            return s;
        }
        while(next_permutation(s.begin(),s.end()) && count<k-1){
            count++;
        }
        return s;
    }
};