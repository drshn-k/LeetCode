class Solution {
public:
    int numberOfMatches(int n) {
          return n > 1 ? n / 2 + numberOfMatches((n + 1) / 2) : 0;
    }
};