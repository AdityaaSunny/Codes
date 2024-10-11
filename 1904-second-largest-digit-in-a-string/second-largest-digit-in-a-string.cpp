class Solution {
public:
    
    int secondHighest(string s) {
        
        int a=-1,b=-1,n=s.length();

        for(int i=0;i<n;i++)
        {
            if(s[i]>=48 && s[i]<58)
            {
                int k=s[i]-'0';

                if(k==a||k==b)continue;

                if(k>a) b=a,a=k;
                else if(k>b) b=k;
            }
        }

        return b;
    }
};