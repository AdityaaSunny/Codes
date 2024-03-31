class Solution {
public:
    int firstUniqChar(string s) {
        int char_map[26]{ 0 };
		for (char ch : s) {
			char_map[ch - 'a']++;
		}
		for (size_t i = 0; i < s.size(); i++) {
			if (char_map[s[i] - 'a'] == 1) {
				return i;
			}
		}
		return -1;
	}
};