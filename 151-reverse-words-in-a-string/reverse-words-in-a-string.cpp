class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp, result = "";
        bool first = true;
        while(ss >> temp)
        {
            if(first)
                first = false;
            else
                temp = temp + " ";
            result = temp + result;
        }
        return result;
    }
};