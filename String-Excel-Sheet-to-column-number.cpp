171. Excel Sheet Column Number

class Solution {
public:
    int titleToNumber(string s) {
          long long number = 0;
    for (int i = 0; s[i] != 0; i++) {
        number = number*26 + s[i] - 'A' + 1;
    }
    return number;
    }
};
