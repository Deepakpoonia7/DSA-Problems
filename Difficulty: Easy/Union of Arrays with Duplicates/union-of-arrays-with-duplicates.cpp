#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> s;
        for (int x : a) s.insert(x);
        for (int x : b) s.insert(x);
        vector<int> result(s.begin(), s.end());
        sort(result.begin(), result.end());
        return result;
    }
};

