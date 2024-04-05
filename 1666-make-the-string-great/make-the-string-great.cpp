class Solution {
public:
    string makeGood(string s) {
         stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(!st.empty() && st.top()+32 == s[i])
            {
                st.pop();
            }
            else if(!st.empty() && st.top() == s[i]+32)
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        s.clear();
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};