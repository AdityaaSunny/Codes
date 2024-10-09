class Solution {
public:
    int mySqrt(int x) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if (x==0) return 0 ;
        int s=1, e=x/2 ;
        long long int mid = s + (e-s)/2 ;
        while (s<=e){
            if ((mid*mid)<=x && (mid+1)*(mid+1)>x){
                return mid ;
            }
            if (mid*mid > x){
                e = mid-1 ;
            }
            else s = mid+1 ;
            mid = s + (e-s)/2 ;
        }
        return 1 ;
    }
};