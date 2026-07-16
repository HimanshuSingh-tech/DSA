class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;

        for (int x : nums)
            st.insert(x);

        int idx = 0;
        for (int x : st) {
            nums[idx++] = x;
        }

        return idx;
    }
};