class Solution {
public:
    string removeOccurrences(string s, string part) {
        // SLIDING WINDOW APPROACH 
        int i = 0; 
        int j = 0; 
        int k = part.length(); 

        while (j < s.length()) {
            if (j-i+1 < k) { // window is smaller than part 
                j++; 
            }
            else { // else if (j-i+1 == k) 
                if (s.substr(i,k) == part) { // we found the string, so remove it 
                    s.erase(i,k); 
                    i = 0; j = 0; // pointers ko reset kar diya 
                }
                else { // else i will slide the window 
                    i++; 
                    j++; 
                }
            }
        }

        return s; 
    }
};