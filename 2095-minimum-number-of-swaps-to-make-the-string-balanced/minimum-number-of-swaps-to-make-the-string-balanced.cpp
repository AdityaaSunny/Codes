class Solution {
public:
    int minSwaps(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        stack<char> st;
        
        for (auto i : s) {
            if (i == '[') {
                st.push(i); 
            } else {
                if (!st.empty() && st.top() == '[') {
                    st.pop(); 
                } 
            }
        }
        return (st.size()+1)/2;
    }
};