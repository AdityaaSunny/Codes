class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        stack<long int>st;
        for(int i=0;i<happiness.size();i++)
        {
            st.push(happiness[i]);
        }
        int index=0;
        long long int maxi_count=0;
        while(k-- && !st.empty())
        {
            if(st.top()-index>0)
            {
                maxi_count+=st.top()-index;
            }
            else if(st.top()-index<0)
            {
                 maxi_count+=0;
            }
            st.pop();
            index++;
        }
        return maxi_count;
    }
};