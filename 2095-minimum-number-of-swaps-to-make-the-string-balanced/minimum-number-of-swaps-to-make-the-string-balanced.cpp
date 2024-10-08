class Solution {
public:
    int minSwaps(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int lb=0;
        int moves=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==']')
            {
                if(lb==0)
                {
                    moves++;
                    lb++;
                }
                else
                {
                    lb--;
                }
            }
            else
            {
                lb++;
            }
        }

        return moves;
    }
};