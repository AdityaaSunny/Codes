class Solution {
public:
    int num;
    vector<vector<string>> res;
    void find(vector<pair<int,int>>& q,int i){
        if(i==num){
            string st="";
            for(int i=0;i<num;i++){
                st+=".";
            }
            vector<string> v(num,st);
            for(auto&x:q){
                int a = x.first;
                int b = x.second;
                v[a][b]='Q';
            }
            res.push_back(v);

        }

        for(int j=0;j<num;j++){
            bool flag = true;
            for(auto&x:q){
                int a = x.first;
                int b = x.second;
                if(j==b || abs(i-a)==abs(j-b)){
                    flag=false;
                    break;
                }
            }
            if(flag){
                q.push_back({i,j});
                find(q,i+1);
                q.pop_back();
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<pair<int,int>> Q;
        num=n;
        find(Q,0);
        return res;
    }
};