//Approach 1 : 
//time complexity - O(1) since the algorithm always iterates through a constant number of values (13 in this case).
//O(1) since the amount of extra space used is constant (the size of the storeIntRoman vector, which is also 13 in this case
class Solution {
public:
    string intToRoman(int num) {
         const vector<pair<int, string>> valueSymbols{
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
        {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
        {5, "V"},    {4, "IV"},   {1, "I"}};
    string ans;
    for (const auto& [value, symbol] : valueSymbols) {
      if (num == 0)
        break;
      while (num >= value) {
        num -= value;
        ans += symbol;
      }
    }
    return ans;
    }
};