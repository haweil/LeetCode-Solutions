
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        if (n == 1)
        {
            return { -1 };

        }
        vector<int> ans(n);
        int max_right = arr[n - 1];
        ans[n - 1] = -1;
        for (int i = n - 2; i >= 0; --i) {
            
            ans[i] = max_right;
                if (arr[i] > max_right) {
                    max_right = arr[i];
                }
        }
        return ans;
        }
};