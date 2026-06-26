class Solution {
public:
    void getallcombination(int i, vector<int>& candidates, int target,
                           vector<vector<int>> &ans, vector<int> &combin) {

        int n = candidates.size();

        if (i == n) {
            if (target == 0) {
                ans.push_back(combin);
            }
            return;
        }

        if (candidates[i] <= target) {
            combin.push_back(candidates[i]);
            getallcombination(i, candidates, target - candidates[i], ans, combin);
            combin.pop_back();
        }

        getallcombination(i + 1, candidates, target, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

        getallcombination(0, candidates, target, ans, combin);

        return ans;
    }
};