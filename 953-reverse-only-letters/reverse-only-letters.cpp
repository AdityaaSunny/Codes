class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int n=s.length();
        while(i<n){
            if(isalpha(s[i]) && isalpha(s[n])){
                swap(s[i],s[n]);
                i++;
                n--;
            }
            else if(!isalpha(s[i])){
                i++;
            }
            else{
                n--;
            }
        }
        return s;
    }
};