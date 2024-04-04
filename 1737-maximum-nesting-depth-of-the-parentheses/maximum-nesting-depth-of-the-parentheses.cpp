class Solution {
public:
    int fun(string s , int start , int end){
        if(end == start + 1){
            return 1 ;
        }

        int ans = 0 ;
        int r = 0 ;
        int l = 0 ;
        int start1 = 0 ;
        for(int i=start+1 ; i<end ; i++){
            if(s[i] == '('){
                if(l == 0){
                    start1 = i ;
                }
                l++;
            }
            else{
                r++;
            }
            if(r>0 && r == l){
                ans = max(ans , fun(s , start1 , i));
                r = 0 ;
                l = 0 ;
                start1 = i ;
            }
        }

        return ans + 1 ;

    }
    int maxDepth(string s) {
        string ss = "";
        for(auto x : s){
            if(x == '(' || x == ')'){
                ss += x ;
            }
        }

        int ans = 0 ;
        int r = 0 ;
        int l = 0 ;
        int start = 0 ;
        int end = 0 ;
        for(int i=0 ; i<ss.length() ; i++){
            if(ss[i] == '('){
                if(l == 0){
                    start = i ;
                }
                l++;
            }
            else{
                r++;
            }
            if(r == l){
                ans = max(ans , fun(ss , start , i));
                r = 0 ;
                l = 0 ;
                start = i+1 ;
            }
        }

        return ans ;
    }
};